#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b){
	return a*b/gcd(a,b);
}

int main(){
	
	int N, M;
	cin >> N >> M;//n:소시지의 수, M:평론가의 수
	cout << M - gcd(N, M);
	return 0;
}