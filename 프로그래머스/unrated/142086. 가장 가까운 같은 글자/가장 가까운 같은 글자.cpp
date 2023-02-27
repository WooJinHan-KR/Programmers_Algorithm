#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> result(s.size(), -1);
    vector<vector<int>> positions(26);
    for (int i = 0; i < s.size(); i++) {
        int index = s[i] - 'a';
        positions[index].push_back(i);
    }
    for (int i = 0; i < s.size(); i++) {
        int index = s[i] - 'a';
        auto iter = lower_bound(positions[index].begin(), positions[index].end(), i);
        if (iter != positions[index].end()) {
            int pos = *iter;
            if (pos != i) {
                if (result[i] == -1 || pos - i < i - result[i]) {
                    result[i] = pos - i;
                }
            }
        }
        if (iter != positions[index].begin()) {
            iter--;
            int pos = *iter;
            if (result[i] == -1 || i - pos < result[i] - i) {
                result[i] = i - pos;
            }
        }
    }
    return result;
}
