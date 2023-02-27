#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    
    int answer = 0;
    vector<int> arr;
	arr.push_back(0);
	arr.push_back(1);
    for (int i = 2; i <= n; i++)
	{
		arr.push_back(arr[i-1] + arr[i-2]);
        arr[i] %= 1234567;
	}
    answer = arr[n]%1234567;
    return answer;
}