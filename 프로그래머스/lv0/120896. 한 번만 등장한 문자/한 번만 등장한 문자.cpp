#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

string solution(string s){
        string answer = "";
        vector<int> arr;
        for(int i = 0; i < 26; i++){
            arr.push_back(0);
        }
        for (int i = 0; i < s.length(); i++) {
            arr[char(s[i]) - 97] += 1;
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 1) {
                answer += (char)(i + 97);
            }
        }
        return answer;
}