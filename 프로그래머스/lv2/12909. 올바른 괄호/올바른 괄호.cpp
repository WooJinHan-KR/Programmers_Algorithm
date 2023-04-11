#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int stack = 0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(')
            stack++;
        else if(s[i] == ')' && stack != 0){
            stack--;
        }
        else if(s[i] == ')' && stack == 0){
            answer = false;
            break;
        }
    }
    
    if(stack != 0)
        answer = false;

    return answer;
}

/*
#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    int stack = 0;
    int flag = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')
            stack++;
        else{
            if(stack==0){
                answer = false;
                flag = 1;
                break;
            }
            else
                stack--;
        }
    }
    
    if(stack == 0 && flag == 0)
        answer = true;
    
    return answer;
}
*/