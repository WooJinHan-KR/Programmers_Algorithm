#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    for(int a=0; a<board.size(); a++)
        for(int b=0; b<board[0].size(); b++)
            if(a+b <= k)
                answer += board[a][b];
            
    return answer;
}