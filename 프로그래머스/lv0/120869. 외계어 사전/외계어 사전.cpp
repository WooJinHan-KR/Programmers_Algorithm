#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for(int i=0; i<dic.size(); i++){
        int count = 0;
        if(dic[i].length()==spell.size()){
            for(int j=0; j<spell.size(); j++){
                if (dic[i].find(spell[j]) != string::npos)
                    count++;
            }
            //cout << dic.size();
            if(count == spell.size())
                answer = 1;
        }
    }
    return answer;
}