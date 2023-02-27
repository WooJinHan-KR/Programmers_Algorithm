#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    long long arr[2] = {1, 2};
    if(n>2){
            for(long long i=3; i<=n; i++){
            answer = (arr[0] + arr[1])%1234567;
            arr[0] = arr[1]%1234567;
            arr[1] = answer%1234567;
        }
    }
    if(n==1)
        answer = 1;
    else if(n==2)
        answer = 2;
    
    return answer;
}