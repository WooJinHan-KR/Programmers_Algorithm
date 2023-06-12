#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

int arr[101][101];
int visited[101][101];
int dist[101][101];
queue<pair<int, int>> q;
int N, M;

int x_pos[4] = {-1, 1, 0, 0};
int y_pos[4] = {0, 0, -1, 1};

void BFS(int start_x, int start_y)
{
	q.push(make_pair(start_x, start_y));
	dist[start_x][start_y]++;
	visited[start_x][start_y] = 1;
	
	while(!q.empty()){
		
		int x = q.front().first;
		int y = q.front().second;
		
		q.pop();
		
		for(int i=0; i<4; i++){
			int x_new = x + x_pos[i];
			int y_new = y + y_pos[i];
			
			if((1<=x_new && x_new <= N) && (1 <= y_new && y_new <= M) && !visited[x_new][y_new] && arr[x_new][y_new] == 1){
				visited[x_new][y_new] = 1;
				dist[x_new][y_new] = dist[x][y] + 1;
				q.push(make_pair(x_new, y_new));
			}
		}
	}
}


int main(){
	
	cin >> N >> M;
	for(int i=1; i<=N; i++)
	{
		string row;
		cin >> row;
		for(int j=1; j<=M; j++)
			arr[i][j] = row[j-1] - '0';
	}
	
	BFS(1, 1);
	
	cout << dist[N][M];
	
	return 0;
}