#include <string>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (a % b == 0) 
    	return b;
	else 
    	return gcd(b, a % b);
}

int solution(int a, int b) {
    int answer = 0;
    int x = 0;
    x = b/gcd(a, b);
    
    int num = x;
    while(1){
        if(num%2==0)
            num = num/2;
        else if(num%5==0)
            num = num/5;
        else
            break;
    }

    if(num == 1)
        answer = 1;
    else
        answer = 2;
    
    return answer;
}