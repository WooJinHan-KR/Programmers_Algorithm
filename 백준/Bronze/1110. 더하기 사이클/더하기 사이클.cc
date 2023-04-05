#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
    int n, newn, flag, count = 0;
    cin >> n;
	newn = n;
	while(1)
	{
		count++;
		newn = newn % 10 * 10 + (newn % 10 + newn / 10) % 10;
		if(newn == n)
			break;
	}
	
	cout << count;

    return 0;
}