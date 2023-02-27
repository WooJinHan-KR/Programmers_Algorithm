#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    char a = letter[0];
    /*for(int i=0; i<my_string.length(); i++){
        if(letter.compare(my_string[i]) == 0)
            answer.push_back(my_string[i]);
    }*/
    
    my_string.erase(remove(my_string.begin(), my_string.end(), a), my_string.end());
    answer = my_string;

    return answer;
}