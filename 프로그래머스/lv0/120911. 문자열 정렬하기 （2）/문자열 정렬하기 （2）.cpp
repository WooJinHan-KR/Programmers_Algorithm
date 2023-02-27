#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> a;
    for(int i=0; i<my_string.size(); i++){
        a.push_back(tolower(my_string[i]));
    }
    sort(a.begin(), a.end());
    for(int j=0; j<a.size(); j++)
        answer += a[j];
    return answer;
}