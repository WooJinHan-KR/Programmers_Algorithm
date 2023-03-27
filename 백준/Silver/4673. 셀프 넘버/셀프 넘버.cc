#include <iostream>
using namespace std;

int check(int a);

int main(){
	int a;
	const int count = 10000;
	int arr[count];
	
	for(int i=0; i<count; i++){
		arr[i] = i+1;
	}

	for(int i=0; i<count; i++){
		a = check(i+1);
		if(a <= 10000)
			arr[a-1] = 0;
	}
	
	for(int i=0; i<count; i++){
		if(arr[i] != 0)
			cout << arr[i] << endl;
	}
	return 0;
}

int check(int a){
	int m, n, o, p;
	m = a/1000;
	n = (a%1000) / 100;
	o = (a%100) / 10;
	p = (a%10);
	return a + m + n + o + p; 
}