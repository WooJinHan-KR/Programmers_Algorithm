#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> arr;
	int k;
	cin >> k;
	for(int i=0; i<k; i++){
		int a;
		cin >> a;
		if(a == 0)
			arr.pop_back();
		else
			arr.push_back(a);
	}
	int sum = 0;
	for(int i=0; i<arr.size(); i++)
		sum += arr[i];
	cout << sum;
	return 0;
}