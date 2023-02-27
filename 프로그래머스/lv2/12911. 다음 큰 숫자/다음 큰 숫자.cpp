#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n){
    int answer = 0;
    vector<int> binary;
    for(int i = 0; n > 0; i++)
    {
        binary.push_back(n%2);
        n /= 2;
    }
    binary.push_back(0);
    reverse(binary.begin(), binary.end());
    next_permutation(binary.begin(), binary.end());
    reverse(binary.begin(), binary.end());

    int a = 1;
    for(int i = 0; i < binary.size(); i++)
    {
        answer += (a * binary[i]);
        a *= 2;
    }
    return answer;
}