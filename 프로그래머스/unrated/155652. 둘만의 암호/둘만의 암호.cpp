#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    
    string answer = "";
    string alpha = "abcdefghijklmnopqrstuvwxyz";//알파벳 문자열 선언
    
    for(int i=0; i<skip.size(); i++)
         alpha.erase(std::find(alpha.begin(), alpha.end(), skip[i]));
    //없앨 알파벳들 알파벳 문자열에서 찾아가며 제거
    
    for(int j=0; j<s.size(); j++){
        int temp = alpha.find(s[j]);
        if(temp + 1 + index > alpha.size()*2)//더해줄 인덱스값이 z를 2번 넘을때
            answer.push_back(alpha[temp+index-alpha.size()*2]);//인덱스에 맞게 알파벳 변환
        else if(temp+1+index > alpha.size())//더해줄 인덱스값이 z를 한번만 넘을때
            answer.push_back(alpha[temp+index-alpha.size()]);
        else//인덱스를 더해도 z를 넘어가지 않을때
            answer.push_back(alpha[temp+index]);
    }
        
    return answer;
}