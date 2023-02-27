#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> su_1 = {1, 2, 3, 4, 5};
    vector<int> su_2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> su_3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    //정답을 적는 배열 추가
    int correct_1 = 0, correct_2 = 0, correct_3 = 0;//1, 2, 3 수포자 맞은 문제 카운트 변수
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == su_1[i%5])
            correct_1++;
        if(answers[i] == su_2[i%8])
            correct_2++;
        if(answers[i] == su_3[i%10])
            correct_3++;
    }//순서대로 답과 찍은 답을 비교하면서 맞았으면 카운트++
    
    int max = correct_1;
    int arr[3] = {correct_1, correct_2, correct_3};
    
    for(int i=0; i<3; i++)
        if(arr[i] >= max)
            max = arr[i];//수포자 세명중에 가장 많이 맞은 문제 개수 알아내서
    
    for(int j=0; j<3; j++)
        if(max == arr[j])
            answer.push_back(j+1);//차례대로 answer에 넣어줌
    
    return answer;
}