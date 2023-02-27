#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string a = to_string(n);
    for(int i=0; i<a.length(); i++)
        answer = answer + a[i] - 48;
    return answer;
}