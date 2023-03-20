#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int n = board.size();
    vector<int> baguni;
    vector<vector<int>> arr(n);
    for(int i=n-1; i>=0; i--)
        for(int j=0; j<n; j++)
            if(board[i][j])
                arr[j].push_back(board[i][j]);
    
    for(int i=0; i<moves.size(); i++){ 
        if(arr[moves[i]-1].size()==0)//비어있는 라인이면 패스
            continue;
        
        if(baguni.size()!=0 && arr[moves[i]-1].back() == baguni.back()){//끝값과 바구니에 있는 마지막 애가 같으면
            arr[moves[i]-1].pop_back();//우선 뽑은 인형 제거
            baguni.pop_back();//바구니 애도 제거
            answer+=2;
        }
        else{
            baguni.push_back(arr[moves[i]-1].back());//뽑은 인형 바구니에 넣고
            arr[moves[i]-1].pop_back();//우선 뽑은 인형 제거
        }
    }
    
    return answer;
}