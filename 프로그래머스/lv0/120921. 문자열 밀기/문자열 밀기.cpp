#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int flag = 0;
    for(int i=0; i<A.size(); i++){
        if(A == B){
            flag = 1;
            break;
        }          
        string changeA = "";
        changeA += A.substr(A.size()-1, 1) + A.substr(0, A.size()-1);
        A = changeA;
        answer++;
    }
    if(flag==0)
        answer=-1;
    return answer;
}