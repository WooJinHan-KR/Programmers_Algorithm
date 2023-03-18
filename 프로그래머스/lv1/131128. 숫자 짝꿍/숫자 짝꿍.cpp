#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int X_arr[10] = {0};
    int Y_arr[10] = {0};
    for(int i=0; i<X.size(); i++)
        X_arr[X[i]-'0']++;
    
    for(int i=0; i<Y.size(); i++)
        Y_arr[Y[i]-'0']++;
    
    int count = 0;
    for(int i=0; i<10; i++){
        if(X_arr[i]!=0 && Y_arr[i]!=0){
            count = (X_arr[i] <= Y_arr[i]) ? X_arr[i] : Y_arr[i];
            char ch = i + '0';
            answer.append(count, ch);
        }
    }
    
    sort(answer.begin(), answer.end(), greater<>());
    
    if(answer.empty())
        answer += "-1";
    else if(answer.back() == '0'&& answer.front() == '0')
        answer = "0";
    
    return answer;
}