#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int solution(vector<int> arr) {
    long long answer = 1;
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size()-1; i++){
        arr[i+1] = lcm(arr[i], arr[i+1]);
    }
    answer = arr.back();
    return answer;
}