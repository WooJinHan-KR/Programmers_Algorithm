#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string num; 
    stringstream stream;
    stream.str(s);
    
    int max, min;
    stream >> num;
    max = stoi(num);
    min = stoi(num);
    
    while(stream >> num)
    {
        if(stoi(num) > max)
            max = stoi(num);
        else if(stoi(num) < min)
            min = stoi(num);
    }
    
    answer = to_string(min) + " " + to_string(max);
    return answer;
}