#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    for(int i=0; i<array.size(); i++){
        if(n==array[i])
            answer++;       
    }//돌아가면서 중복된 수의 개수 더하기
    return answer;
}
