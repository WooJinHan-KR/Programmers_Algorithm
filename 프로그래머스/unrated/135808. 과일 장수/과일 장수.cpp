#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int n = score.size();
    vector<vector<int>> box(n/m);
    int index = 0;
    
    sort(score.begin(), score.end(), greater<>());
    for(int i=0; i<n/m; i++)
        for(int j=0; j<m; j++)
            box[i].push_back(score[index++]);
    
    for(int i=0; i<n/m; i++)
        answer += box[i][m-1];
    
    answer *= m;
    return answer;
}
