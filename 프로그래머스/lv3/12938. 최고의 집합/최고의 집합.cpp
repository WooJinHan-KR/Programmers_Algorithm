#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int count = s%n;
        
    for(int i=0; i<n; i++){//곱이 최대가 되기 위해선 모든 수의 차이가 최소가 되어야함
        answer.push_back(s/n);//s를 n으로 나눈 수를 다 넣어주고
        if(count){//만약 나머지가 남아있다면
            answer[i]++;//각 값에 1씩 더해줌
            count--;//남은 나머지 차감
        }
    }
    reverse(answer.begin(), answer.end());
    
    if(s<n)//숫자의 개수가 s보다 많아지면 자연수가 안나와서 answer -1 넣기
        answer = {-1};
    
    return answer;
}