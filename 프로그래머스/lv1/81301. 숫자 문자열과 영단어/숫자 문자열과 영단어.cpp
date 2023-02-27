#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string a = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9')//number
            a.push_back(s[i]);
        else if(s[i] == 'z'){//zero
            a.push_back('0');
            i += 3;
        }
        else if(s[i] == 'o'){
            a.push_back('1');
            i += 2;
        }
        else if(s[i] == 't'&&s[i+1]=='w'){
            a.push_back('2');
            i+=2;
        }
        else if(s[i] == 't'&&s[i+1]=='h'){
            a.push_back('3');
            i+=4;
        }
        else if(s[i] == 'f'&&s[i+1]=='o'){
            a.push_back('4');
            i+=3;
        }
        else if(s[i] == 'f'&&s[i+1]=='i'){
            a.push_back('5');
            i+=3;
        }
        else if(s[i] == 's'&&s[i+1]=='i'){
            a.push_back('6');
            i+=2;
        }
        else if(s[i] == 's'&&s[i+1]=='e'){
            a.push_back('7');
            i+=4;
        }
        else if(s[i] == 'e'){
            a.push_back('8');
            i+=4;
        }
        else if(s[i] == 'n'){
            a.push_back('9');
            i+=3;
        }
    }
    answer = stoi(a);
    return answer;
}