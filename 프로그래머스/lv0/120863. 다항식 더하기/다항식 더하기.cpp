#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    int a = 0;
    int b = 0;
    stringstream stream;
    stream.str(polynomial);

    string word;
    
    while(stream >> word) {
        if(word == "x")
            a++;
        else if(word[word.size()-1] == 'x')
            a += stoi(word);
        else if(word == "+")
            a += 0;
        else
            b += stoi(word);
        //cout << word;
    }
    
    if(b==0 && a==1)
        answer = answer + "x";
    else if(a==1)
        answer = answer + "x + " + to_string(b);
    else if(b == 0)
        answer = answer + to_string(a) + "x";
    else if(a == 0)
        answer = answer + to_string(b);
    else{
        answer += to_string(a);
        answer += "x + ";
        answer += to_string(b);  
    }
    
    return answer;
}