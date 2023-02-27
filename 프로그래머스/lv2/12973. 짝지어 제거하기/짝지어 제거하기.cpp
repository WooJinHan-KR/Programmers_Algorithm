#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = -1;
    int i = 0;
    vector <char> arr;
    arr.push_back(s[i]);
    for(int i=1; i<s.size(); i++){
        if(arr.back() != s[i])
            arr.push_back(s[i]);
        else
            arr.pop_back();
    }
    
    arr.size()==0 ? answer = 1 : answer = 0;

    return answer;
}