#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int left = 0, right = 0;
    for(int i=0; i<sizes.size(); i++){
        int temp = 0;
        if(sizes[i][0]<sizes[i][1]){
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        if(sizes[i][0] >= left)
            left = sizes[i][0];
        if(sizes[i][1] >= right)
            right = sizes[i][1];
    }
    answer = left * right;
    return answer;
}