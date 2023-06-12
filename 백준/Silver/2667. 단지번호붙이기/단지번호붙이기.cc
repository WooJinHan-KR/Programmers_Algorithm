#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;

int arr[26][26];
int visited[26][26];

int M;
int coun = 0;

int x_pos[4] = {-1, 1, 0, 0};
int y_pos[4] = {0, 0, -1, 1};

void dfs(int start_x, int start_y)
{
	visited[start_x][start_y] = 1;
	arr[start_x][start_y] = 2;
	coun++;
	
	for(int i=0; i<4; i++){
		int new_x, new_y;
		new_x = start_x + x_pos[i];
		new_y = start_y + y_pos[i];
		if((1<=new_x && new_x<=M) && (1<=new_y && new_y<=M) && !visited[new_x][new_y] && arr[new_x][new_y] == 1){
			dfs(new_x, new_y);
			visited[new_x][new_y] = 1;		
		}
	}	
}

int main(){
	
	vector<int> apart;
	
	cin >> M;
	
	for(int i=1; i<=M; i++){
		string a;
		cin >> a;
		for(int j=0; j<M; j++)
			arr[i][j+1] = a[j] - '0';
	}
	
	for(int i=1; i<=M; i++){
		for(int j=1; j<=M; j++){
			if(arr[i][j] == 1){
				dfs(i, j);
				apart.push_back(coun);
				coun = 0;
			}
		}
	}
	
	cout << apart.size() << endl;
	sort(apart.begin(), apart.end());
	for(int i=0; i<apart.size(); i++)
		cout << apart[i] << endl;
	return 0;
}