#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;

    for(long long i=left+1; i<=right+1; i++){
        int index = 0;
        int round = 0;
        index = i%n;
        round = i/n;
        if(index <= round && index!=0)
            index = round+1;
        else if(index==0)
            index = n;
        answer.push_back(index);
    }
        
    return answer;
}