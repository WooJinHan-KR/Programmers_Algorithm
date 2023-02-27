#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    sort(numlist.begin(), numlist.end());
    int a = numlist.size();
    for(int i=0; i<a; i++){
        int index = 0;
        int min = 10000;
        for(int j=0; j<numlist.size(); j++){
            if(min >= abs(n-numlist[j])){
                index = j;
                min = abs(n-numlist[j]);
            }
        }
        answer.push_back(numlist[index]);
        numlist.erase(numlist.begin()+index);
    }
    return answer;
}