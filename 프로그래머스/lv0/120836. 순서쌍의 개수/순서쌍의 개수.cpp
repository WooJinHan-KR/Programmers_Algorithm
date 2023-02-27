#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<sqrt(n); i++){
        if(n%i == 0)
            answer++;
    }
    
    answer *= 2;
    
    if(sqrt(n) - floor(sqrt(n)) == 0)
        answer++;
    return answer;
}