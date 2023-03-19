#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int count[100001] = {0, };
    
    for(int i=1; i<=number; i++)
        for (int j=1; j<=number/i; j++) 
            count[i * j]++;
    
    for(int i=1; i<=number; i++)
        (count[i]>limit) ? answer+=power : answer+=count[i];
    
    return answer;
}