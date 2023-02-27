#include <string>
#include <vector>

using namespace std;



int solution(int n) {//사람의 수 n
    
    int answer = 0;//피자는 6조각으로 잘라줌 남기지 않고 같은 수의 피자 다먹기
    if(n % 6 == 0){
        answer = n/6;
    }
    else if(n % 3 == 0){
        answer = n/3;
    }
    else if(n % 2 == 0){
        answer = n/2;
    }
    else
        answer = n;
    
    return answer;
}