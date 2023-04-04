#include <iostream>
#include <cstring>
#include <stdio.h>
//#include <string.h>
using namespace std;

int main(){
	
	int n, m;
	double sum, avg, count;
	cin >> n;
	
	int **arr = new int*[n];
	for(int i=0; i<n; i++){
		arr[i] = new int[1000];
		memset(arr[i], 0, sizeof(int)*1000);
	}
	
	for(int i=0; i<n; i++){
		cin >> m;
		sum = 0, avg = 0, count = 0;
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
			sum += arr[i][j];
		}
		avg = sum / m;
		
		for(int k=0; k<m; k++){
			if(arr[i][k] > avg){
				count++;
			}
		}
		
		cout << fixed;
		cout.precision(3);
		cout << count/m * 100 << "%" << endl;		
	}
			
		
	for(int i=0; i<n; i++){
		delete [] arr[i];
	}
	delete [] arr;
    return 0;
}