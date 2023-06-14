#include <iostream>
#include <queue>

using namespace std;

int visited[3000001];
int f, s, g, u, d;
queue<pair<int,int>> q;
int flag = 1;

void bfs()
{
	q.push({s, 0});
	visited[s] = 1;
	
	while(!q.empty())
	{
		int index = q.front().first;
		int cnt = q.front().second;
		q.pop();

		if(index == g){
			visited[g] = cnt;
			flag = 0;
			return;
		}	
		
		if(index < 1 || index > f)
			continue;
			
		if(!visited[index+u])
		{
			q.push({index+u, cnt+1});
			visited[index+u] = 1;
		}
		if(index > d && !visited[index-d])
		{
			q.push({index-d, cnt+1});
			visited[index-d] = 1;
		}
	}
	
}

int main(){
	
	cin >> f >> s >> g >> u >> d;

	bfs();
	
	if(flag == 1)
		cout << "use the stairs";
	else
		cout << visited[g];
	
	return 0;
}