#include <string>
#include <vector>
#include <iostream>

using namespace std;

string change(int n){
    string a;
    while(n != 0)
    {
        if(n % 2 == 1)
            a.push_back('1');
        else
            a.push_back('0');
        n /= 2;
    }
    return a;
}

vector<int> solution(string s) {
    vector<int> answer;
    int zerocount = 0;
    int fullcount = 0;
    while(s.size() > 1){
        int nextnum = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0')
                zerocount++;
            else
                nextnum++;
        }
        cout << nextnum << " ";
        s = change(nextnum);
        fullcount++;
    }
    answer.push_back(fullcount);
    answer.push_back(zerocount);
    return answer;
}