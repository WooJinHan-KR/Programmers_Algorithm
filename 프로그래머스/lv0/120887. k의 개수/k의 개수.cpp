#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string a;
    for(int h=i; h<=j; h++){
        a = to_string(h);
        for(int m=0; m<a.size(); m++)
            if(a[m] == k+48)
                answer++;
    }
    return answer;
}