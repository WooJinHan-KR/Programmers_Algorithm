#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

int arr[101][101];
int visited[101];
int dist[101][101];
int virus = 0;

int N, M;

void DFS(int V)
{
	visited[V] = 1;
	for(int i=1; i<=N; i++){
		if(visited[i] == 0 && arr[V][i] == 1)
		{
			DFS(i);
			virus++;
		}
	}
}

int main(){
	
	cin >> N >> M;
	for(int i=0; i<M; i++){
		int from, to;
		cin >> from >> to;
		arr[from][to] = 1;
		arr[to][from] = 1;
	}
	DFS(1);
	cout << virus;
	return 0;
}