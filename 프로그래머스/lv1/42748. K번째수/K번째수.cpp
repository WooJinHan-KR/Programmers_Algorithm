#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i=0; i<commands.size(); i++){
        vector<int> array_2(commands[i][1]-commands[i][0]+1);
        copy(array.begin()+commands[i][0]-1, array.begin()+commands[i][1], array_2.begin());
        sort(array_2.begin(), array_2.end());
        answer.push_back(array_2[commands[i][2] - 1]);
    }
    return answer;
}