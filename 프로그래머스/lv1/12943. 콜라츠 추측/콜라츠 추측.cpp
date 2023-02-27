#include <string>
#include <vector>
#include <iostream>
#include <iostream>

using namespace std;

int solution(int num) {
    int count = 0;
    long a = num;
    if(a==1)
        count = 0;
    else{
        while(a!=1){
            if(count==500){
                count = -1;
                break;
            }
            if(a%2==0){
                a/=2;
            }
            else{
                a = a*3 + 1;
            }
            count++;
        }
    }
    return count;
}