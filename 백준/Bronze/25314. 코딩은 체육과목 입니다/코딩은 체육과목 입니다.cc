#include <iostream>

using namespace std;

int main(){
	
	int n;
	int a;
	
	cin >> n; 
	a = n/4 + (n%4!=0 ? 1 : 0);
	for(int i=0; i<a; i++)
		cout << "long ";
		
	cout << "int";
	
	return 0;
}