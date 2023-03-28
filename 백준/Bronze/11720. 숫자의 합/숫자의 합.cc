#include <iostream>
using namespace std;

int main(){
	int N, check = 0;
	cin >> N;
	char *arr = new char[N];
	cin >> arr;
	for(int i=0; i<N; i++){
		int c = arr[i] - '0';
		check += c;
	}
	cout << check;
}