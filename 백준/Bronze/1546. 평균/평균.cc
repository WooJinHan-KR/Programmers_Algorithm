#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
    double arr[n];
    double max = 0;
	double sum = 0;
    for(int i=0; i<n; i++)
    {
    	cin >> arr[i];
    	if(max < arr[i])
			max = arr[i];
	}

	for(int j=0; j<n; j++){
		arr[j] = arr[j]/max * 100;
		sum += arr[j];
	}
	
	cout << fixed;
	cout.precision(2);
	cout << sum / n;

    return 0;
}