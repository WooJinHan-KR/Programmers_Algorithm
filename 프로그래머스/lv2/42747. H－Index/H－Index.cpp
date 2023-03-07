#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());
    for (int i = citations.size() - 1; i >= 0; i--) {
        if (citations.size() - i >= citations[i])
            return citations.size() - i - 1;
    }
    return citations.size();
}