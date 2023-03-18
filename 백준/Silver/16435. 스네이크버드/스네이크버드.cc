#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N, L;
	
	cin >> N >> L;
	
	int arr[N];
	
	for(int i=0; i<N; i++)
		scanf("%d", &arr[i]);
	
	sort(arr, arr+N);
	
	if(L < arr[0])
		cout << L;
	else{
		for(int i=0; i<N; i++){
			if(L >= arr[i])
				L++;
		}
		cout << L;
	}
}