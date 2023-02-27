#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string num = "";
    int flag = 0;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'Z'){
            answer -= stoi(num);
            num = "";
        }
        else if(s[i] != 'Z' && s[i] != ' '){
            if(flag == 1){
                num = "";
                flag = 0;
            }
            num.push_back(s[i]);
        }
        else if(s[i] == ' '){
            if(num != ""){
                answer += stoi(num);
                flag = 1;
            }
        }     
    }
    if(num != "")
        answer += stoi(num);
    
    return answer;
}