#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int n = board.size();
    vector<vector<int>> v(n+2,vector <int>(n+2,0));
    int answer = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]==1){
                v[i+1][j+1]=1;//폭탄 위치
                v[i+1][j+2]=1;//우
                v[i+1][j]=1;//좌
                v[i][j+1]=1;//상
                v[i+2][j+1]=1;//하
                v[i+2][j+2]=1;//우하
                v[i][j+2]=1;//우상
                v[i][j]=1;//좌상
                v[i+2][j]=1;//좌하
            }
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(v[i][j]==0)
                answer++;
        }
    }
    return answer;
}