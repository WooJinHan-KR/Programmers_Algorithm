#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    s[0] = toupper(s[0]);
    answer += s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i]==' ')
            answer += ' ';
        else if(s[i-1]==' ' && s[i]!=' ')
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
    }
    return answer;
}