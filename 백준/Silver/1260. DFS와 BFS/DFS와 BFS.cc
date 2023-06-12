#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

int arr[1001][1001];
int visited[1001];
//전역 배열은 자동으로 0 초기화가 된다
//추가로 지역 배열보다 메모리의 제한이 걸려있지 않다
int N, M, V;

void DFS(int V)//깊이 우선 탐색 
{
	visited[V] = 1; //V를 방문 처리
	cout << V << " ";
	for(int i=1; i<=N; i++){//1부터 N까지 
		if(visited[i] == 0 && arr[V][i] == 1)
			DFS(i);
		//만약 아직 i가 방문이 안됐고 이어져 있다면 반복 
	} 	
}

void BFS(int V)
{
	queue<int> q;
	
	visited[V] = 1;
	q.push(V);
	while(!q.empty())
	{
		int first;
		first = q.front();
		q.pop();
		cout << first << " ";
		
		for(int i=1; i<=N; i++)
		{
			if(visited[i]==0 && arr[first][i] == 1)
			{
				q.push(i);
				visited[i] = 1;
			}
		}
	}
	
}

int main(){

	cin >> N >> M >> V;
	//정점의 개수 N, 간선의 개수 M, 탐색 시작할 정점 V 
	
	for(int i=0; i<M; i++)
	{
		int start, end;
		cin >> start >> end;
		arr[start][end] = 1;
		arr[end][start] = 1;
	}
	
	DFS(V);
	
	cout << endl;
	memset(visited, 0, sizeof(visited));
	
	BFS(V);
}