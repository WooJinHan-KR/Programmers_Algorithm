#include <iostream>
#include <cstring>
#include <stdio.h>
//#include <string.h>
using namespace std;

int main(){
	
	int n, count = 1, sum = 0;
	int sumarr[n];
	cin >> n;
	
	char **arr = new char*[n];
	for(int i=0; i<n; ++i){
		arr[i] = new char[80];
		memset(arr[i], 0, 80);
	}
	//char arr[n][80];
	
	for(int i=0; i<n; i++){
		count = 1;		
		sum = 0;
		cin >> arr[i];
		for(int j=0; j<strlen(arr[i]); j++){
			if(arr[i][j] == 'O'){
				sum += count;
				count += 1;				 
			}
			else
				count = 1;
		}	
		cout << sum << endl;
	}
		
	for(int i=0; i<n; i++){
		delete [] arr[i];
	}
	delete [] arr;
    return 0;
}