#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    sort(indices.begin(), indices.end());
    for(int i=0; i<indices.size(); i++){
        my_string.erase(my_string.begin() + indices[i] - i);
    }
    answer = my_string;
    return answer;
}