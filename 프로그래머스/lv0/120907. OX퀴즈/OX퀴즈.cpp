#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    
    vector<string> answer;
    string x, a, y, b, z;
    
    for(int i=0; i<quiz.size(); i++){
        stringstream s2(quiz[i]);
        s2 >> x >> a >> y >> b >> z;

        if(a=="+"){
            if(stoi(x)+stoi(y) == stoi(z))
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else if(a=="-"){
            if(stoi(x)-stoi(y) == stoi(z))
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }
    
    return answer;
}