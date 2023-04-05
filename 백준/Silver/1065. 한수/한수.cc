#include <iostream>
using namespace std;

int main(){
	int N, count = 99;
	cin >> N;
	
	if(N < 100 && N >= 1)
		cout << N;	
	else if(N >= 100 && N <= 1000){
		for(int i=100; i<=N; i++){
			int a, b, c;
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if(a - b == b - c && i < 1000)
				count++;
		}
	}
	if(N >= 100)
		cout << count;
}