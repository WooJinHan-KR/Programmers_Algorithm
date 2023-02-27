#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupon = 0;
    //vector <int> coupon;
    while(chicken > 0){
        answer += chicken/10;
        coupon += chicken%10;
        if(coupon>=10)
            answer += coupon/10;
        chicken /= 10;
        chicken += coupon/10;
        coupon %= 10;
        cout << answer << " ";
    }
    //if(answer == 0)
        //answer = -1;
    
    return answer;
}