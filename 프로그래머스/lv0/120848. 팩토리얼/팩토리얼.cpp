#include <string>
#include <vector>

using namespace std;

int factorial(int n){
    if (n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}

int solution(int n) {
    int answer = 0;

    for(int i=0; i<12; i++){
        if(n < factorial(i)){
            answer = i-1; 
            break;
        }
    }
    
    return answer;
    
}