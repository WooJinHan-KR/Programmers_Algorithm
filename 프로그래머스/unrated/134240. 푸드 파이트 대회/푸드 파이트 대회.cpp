#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string half = "";
    int sum = 1;
    
    for(int i=1; i<food.size(); i++){
        for(int j=0; j<food[i]/2; j++){
            half += to_string(i);
        }
    }
    answer = answer + half + "0";
    reverse(half.begin(), half.end());
    answer += half;
    return answer;
}