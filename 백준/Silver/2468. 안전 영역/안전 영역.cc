#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int visited[101][101];
int arr[101][101];
int N;
queue<pair<int,int>> q;

int x_pos[4] = {-1, 1, 0, 0};
int y_pos[4] = {0, 0, -1, 1};

void bfs(int x, int y, int height)
{
	q.push({x, y});
	visited[x][y] = 1;
	
	while(!q.empty())
	{
		int now_x = q.front().first;
		int now_y = q.front().second;
		q.pop();
		
		for(int i=0; i<4; i++){
			int new_x = now_x + x_pos[i];
			int new_y = now_y + y_pos[i];
			
			if(new_x < 0 || new_x >= N) continue;
			if(new_y < 0 || new_y >= N) continue;
			
			if(!visited[new_x][new_y] && arr[new_x][new_y] > height)
			{
				visited[new_x][new_y] = 1;
				q.push({new_x, new_y});
			}		
		}
	}	
}

int main(){
	
	cin >> N;
	
	int num = 0;
	
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			cin >> arr[i][j];

	for(int i=0; i<=100; i++){
		int height = 0;
		int count = 0;
		height = i;
		
		memset(visited, 0, sizeof(visited));
		
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				if(height < arr[j][k] && !visited[j][k]){
					bfs(j, k, height);
					count++;
				}
			}
		}
		
		if(count == 0)
			break;
			
		num = max(count, num);
	}
	
	cout << num;
	
	
	return 0;
}