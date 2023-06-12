#include <string>
#include <vector>

using namespace std;

int answer = 0;

void dfs(vector<int> numbers, int sum, int target, int index){
    
    if(index == numbers.size()){
        if(target == sum)
            answer++;
        return;
    }
    
    dfs(numbers, sum + numbers[index], target, index+1);
    dfs(numbers, sum - numbers[index], target, index+1);
        
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, 0, target, 0);
    return answer;
}