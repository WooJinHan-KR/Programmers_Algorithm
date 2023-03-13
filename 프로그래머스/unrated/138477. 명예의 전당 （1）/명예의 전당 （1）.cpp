#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> rank;
    for(int i=0; i<score.size(); i++){
        if(rank.size()<k){
            rank.push_back(score[i]);
            sort(rank.begin(), rank.end(), greater<>());
            answer.push_back(rank.back());
        }
        else{
            rank.push_back(score[i]);
            sort(rank.begin(), rank.end(), greater<>());
            rank.pop_back();
            answer.push_back(rank.back());
        }
    }
    return answer;
}