#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int mbti[4] = {0, };//R, C, J, A  or T, F, M, N
    for(int i=0; i<survey.size(); i++){//시작부터
        if(survey[i][0]=='T' || survey[i][0]=='F' || survey[i][0]=='M' || survey[i][0]=='N' ){//만약 사전순이 아니라 거꾸로 질문이 나왔다면
            char ch = survey[i][0];
            survey[i][0] = survey[i][1];
            survey[i][1] = ch;//사전순대로 RT, CF, JM, AN으로 문자열을 바꿔주고
            choices[i] = 8-choices[i];//숫자도 4를 기준으로 거울돌리듯 바꿔준다
        } 
        if(survey[i][0]=='R')//그리고 첫 문자열에 따라
            mbti[0]+=(4-choices[i]);//mbti는 RCJA 순대로 점수를 저장
        else if(survey[i][0]=='C')
            mbti[1]+=(4-choices[i]);
        else if(survey[i][0]=='J')
            mbti[2]+=(4-choices[i]);
        else if(survey[i][0]=='A')
            mbti[3]+=(4-choices[i]);
    }
    
    string first = "RCJA";
    string second = "TFMN";
    
    for(int i=0; i<4; i++){
        if(mbti[i] >= 0)//MBTI 값이 0보다 크커간 같으면 첫번째 성향이 강하고
            answer+=first[i];
        else//0보다 작아야 두번째 성향이 강하다
            answer+=second[i];
    }
    return answer;
}