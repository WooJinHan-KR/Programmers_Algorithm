#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for(int i=0; i<code.size(); i++){
        if(code[i]=='1' && mode == 0)
            mode = 1;
        else if(code[i] == '1' && mode == 1)
            mode = 0;
        else if(mode == 0 && i%2==0)
                answer+=code[i];
        else if(mode == 1 && i%2!=0)
            answer += code[i];
    }
    if(answer.size()==0)
        answer = "EMPTY";
    return answer;
}