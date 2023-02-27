#include <string>
#include <vector>
#include <cctype>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int flag = 1;
    for(int j=0; j<s.size(); j++){
        if(s[j] == ' '){
            answer.push_back(' ');
            flag = 1;
        }
        else{
                if(flag == 1){
                    answer.push_back(toupper(s[j]));
                    flag = 0;
                }
                else{
                    answer.push_back(tolower(s[j]));
                    flag = 1;
                }
        }
	}
    
    return answer;
}