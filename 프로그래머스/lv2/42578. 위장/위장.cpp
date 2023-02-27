#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> sH;
    for(int i = 0; i < clothes.size(); i++)
        sH[clothes[i][clothes[i].size() - 1]]++;

    for(auto x : sH)
        answer = answer * (x.second + 1);
    answer = answer - 1;
    return answer;
}