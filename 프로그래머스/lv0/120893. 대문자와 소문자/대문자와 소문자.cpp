#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.length(); i++){
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
            answer.push_back(tolower(my_string[i]));
        else
            answer.push_back(toupper(my_string[i]));
    }
    return answer;
}