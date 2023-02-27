#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    string answer = "";
    answer = s;
    return answer;
}