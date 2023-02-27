#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string a = to_string(n);
    vector <int> arr;
    string b;
    for(int i=0; i<a.size(); i++)
        arr.push_back(a[i]-48);
    
    sort(arr.begin(), arr.end());
    
    for(int i=arr.size()-1; i>=0; i--)
        b += to_string(arr[i]);
    
    answer = stol(b);
    return answer;
}