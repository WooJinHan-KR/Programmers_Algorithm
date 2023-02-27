#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int flag = 0;
    if(a < b){
        flag = a;
        a = b;
        b = flag;
    }
    for(int i=b; i<=a; i++)
        answer += i;
        
    return answer;
}