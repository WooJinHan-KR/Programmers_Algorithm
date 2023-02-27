#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;//a : 교환할 빈병  b : a개를 받으면 주는 콜라의 개수    n : 지금 가지고 있는 빈병의 개수
    //int etc=0;//남은 빈병
    while(n >= a){
        int etc = 0;
        etc += n%a; //교환하지 못하고 남은 빈병
        n = (n/a)*b; //빈병을 콜라로 교환해서 바로 먹어치움
        answer += n; //새로 먹은 콜라 개수
        n += etc;
        cout << n << " ";
    }
    return answer;
}