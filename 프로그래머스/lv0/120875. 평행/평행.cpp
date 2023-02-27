#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    sort(dots.begin(), dots.end());
    
    if((double)(dots[0][1]-dots[2][1])/(dots[0][0]-dots[2][0]) == (double)(dots[1][1]-dots[3][1])/(dots[1][0]-dots[3][0]))
        answer = 1;//13, 24
    else if((double)(dots[0][1]-dots[1][1])/(dots[0][0]-dots[1][0]) == (double)(dots[2][1]-dots[3][1])/(dots[2][0]-dots[3][0]))
        answer = 1;//12, 34
    
    return answer;
}