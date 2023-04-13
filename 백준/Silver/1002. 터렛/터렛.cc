#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int x1, y1, r1;
	int x2, y2, r2;
	int R, r;

	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (r1 >= r2){
			R = r1;
			r = r2;
		}
		else{
			R = r2;
			r = r1;
		}
		if (d == 0 && R == r)	
			arr[i] = -1;
		else if (R - r < d && d < R + r)
			arr[i] = 2;
		else if (d == R - r || d == R + r)
			arr[i] = 1;
		else if (d > R + r || d < R - r)
			arr[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}