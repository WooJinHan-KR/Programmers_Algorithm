#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    //n(n+1) - (n-num)(n-num+1) = 2*total
    // n = (2total+num^2-num)/2num
    int n = (total*2 + num*num - num)/(num*2);
    for(int i=n-num+1; i<=n; i++)
        answer.push_back(i);
    return answer;
}