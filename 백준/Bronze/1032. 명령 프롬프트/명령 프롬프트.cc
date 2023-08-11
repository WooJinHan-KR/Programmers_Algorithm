#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> fileNames(N);
    for (int i = 0; i < N; ++i) {
        cin >> fileNames[i];
    }

    int patternLength = fileNames[0].length();
    string pattern = fileNames[0];

    for (int i = 0; i < patternLength; ++i) {
        for (int j = 1; j < N; ++j) {
            if (fileNames[j][i] != pattern[i]) {
                pattern[i] = '?';
                break;
            }
        }
    }

    cout << pattern << endl;

    return 0;
}
