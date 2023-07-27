#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (const auto& command : commands) {
        int i = command[0];
        int j = command[1];
        int k = command[2];

        // 배열 array의 i번째부터 j번째까지 자르고 새로운 배열에 저장
        vector<int> temp(array.begin() + i - 1, array.begin() + j);
        
        // 배열 정렬
        sort(temp.begin(), temp.end());

        // k번째 숫자를 결과 배열에 추가
        answer.push_back(temp[k - 1]);
    }
    
    return answer;
}