#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> ok;
    ok.push_back(words[0]);
    int round;
    for(int i=1; i<words.size(); i++){
        round = i/n + 1;
        auto it = find(ok.begin(), ok.end(), words[i]);
        if(words[i-1].back() != words[i].front()){
            answer.push_back(i%n+1);
            answer.push_back(round);
            break;
        }
        else if(it != ok.end()){
            answer.push_back(i%n+1);
            answer.push_back(round);
            break;
        }
        else
            ok.push_back(words[i]);
    }
    
    if(words.size() == ok.size()){
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}