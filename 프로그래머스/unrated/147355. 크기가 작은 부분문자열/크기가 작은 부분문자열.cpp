#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i=0; i<t.size()-p.size()+1; i++)
        if(stol(t.substr(i, p.size())) <= stol(p))
            answer++;
    return answer;
}