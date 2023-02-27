#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    vector<int> lane(201);
    
    for(int i=0; i<lines.size(); i++)
        for(int j=lines[i][0]+100; j<lines[i][1]+100; j++)
            lane[j]++;
    
    int answer = 0;
    
    for(int k=0; k<lane.size(); k++)
        if(lane[k] > 1)
            answer += 1;
    
    return answer;
}