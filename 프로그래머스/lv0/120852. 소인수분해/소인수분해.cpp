#include <string>
#include <cmath>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int sosu[10001] = {0, };
    
    for(int i=2; i<=10000; i++)
        sosu[i] = i;
    for(int i=2; i<=sqrt(10000); i++){
        if(sosu[i] == 0)
            continue; 
        for(int j=i*i; j<=10001; j+=i)
            sosu[j] = 0;
    }
    for(int i=2; i<=n; i++){
        if((sosu[i] != 0) && (n%sosu[i]==0))
            answer.push_back(sosu[i]);
    }
    return answer;
}