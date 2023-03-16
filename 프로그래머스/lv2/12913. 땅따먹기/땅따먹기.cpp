#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int> > land)
{
    int N = land.size();
    vector<int> dp(4, 0); // 초기값: 0

    for (int i = 0; i < N; i++) {
        vector<int> temp_dp = dp;
        for (int j = 0; j < 4; j++) {
            // 이전 행에서 j열을 선택했을 때의 최대값 계산
            int prev_max = 0;
            for (int k = 0; k < 4; k++) {
                if (j != k) prev_max = max(prev_max, temp_dp[k]);
            }
            dp[j] = prev_max + land[i][j];
        }
    }

    return *max_element(dp.begin(), dp.end()); // 마지막 행에서의 최대값 반환
}
