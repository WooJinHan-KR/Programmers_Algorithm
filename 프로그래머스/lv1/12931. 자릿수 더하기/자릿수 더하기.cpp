#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string a;
    a = to_string(n);
    for(int i=0; i<a.size(); i++)
        answer += a[i]-48;

    return answer;
}