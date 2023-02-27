#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int y = 0, p = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='Y' || s[i]=='y')
            y++;
        else if(s[i]=='P' || s[i]=='p')
            p++;
    }
    
    if(y!=p)
        answer = false;

    return answer;
}