#include <iostream>
#include <queue>

using namespace std;

int visited[200001];
int n, k;
queue<pair<int,int>> q;

void bfs(int num, int count)
{
	q.push({n, 0});
	visited[n] = 1;
	
	while(!q.empty())
	{
		int index = q.front().first;
		int cnt = q.front().second;
		q.pop();
		
		//cout << index << " ";
		
		if(index == k){
			visited[k] = cnt;
			return;
		}	
		
		if(index < 0 || index > 100000)
			continue;
	
		if(!visited[index*2])
		{
			//bfs(index*2, cnt+1);
			q.push({index*2, cnt+1});
			visited[index*2] = 1;
		}
		if(!visited[index+1])
		{
			//bfs(index+1, cnt+1);
			q.push({index+1, cnt+1});
			visited[index+1] = 1;
		}
		if(!visited[index-1])
		{
			//bfs(index-1, cnt+1);
			q.push({index-1, cnt+1});
			visited[index-1] = 1;
		}				
	}
	
}

int main(){
	
	cin >> n >> k;

	bfs(n, 0);
	
	cout << visited[k];
	
	
	
	return 0;
}