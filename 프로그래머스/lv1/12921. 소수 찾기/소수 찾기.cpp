#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int arr[n+1];
    for(int i=1; i<=n; i++)
        arr[i-1] = i;
    
    for(int j=2; j<=sqrt(n); j++){
        if(arr[j-1] == 0)
            continue;
        
        for(int i= j*j; i<=n; i+=j){
            arr[i-1] = 0;
        }
    }
    
    int answer = 0;
    
    for(int i=2; i<=n; i++){
        if(arr[i-1] != 0)
            answer++;
    }
    return answer;
}