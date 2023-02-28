#include <string>
#include <vector>
#include <iostream>

using namespace std;

//동적계획법으로 재귀를 쓰는 Top-down과 반복문을 사용하는 Bottom-up이 있는데 후자를 사용

int solution(vector<vector<int>> triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    // 초기값 설정
    dp[0][0] = triangle[0][0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i-1][0] + triangle[i][0]; // 삼각형 왼쪽 변
        dp[i][i] = dp[i-1][i-1] + triangle[i][i]; // 삼각형 오른쪽 변
    }
    
    // dp 계산
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
        }
    }
    
    // 최댓값 찾기
    int answer = 0;
    for (int i = 0; i < n; i++) {
        answer = max(answer, dp[n-1][i]);
    }
    
    return answer;
}