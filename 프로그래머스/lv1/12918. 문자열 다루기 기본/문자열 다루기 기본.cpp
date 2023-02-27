#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            answer = false;
            count++;
        }
    }
    if(s.size()!=4 && s.size()!=6)
        answer = false;
    else{
        if(count == s.size())
            answer = true;
    }
    return answer;
}