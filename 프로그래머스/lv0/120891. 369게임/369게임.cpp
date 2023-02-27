#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string a = to_string(order);
    for(int i=0; i<a.length(); i++){
        if(a[i] == 3+48 ||a[i] == 6+48 || a[i] == 9+48)
            answer++;
    }
    return answer;
}