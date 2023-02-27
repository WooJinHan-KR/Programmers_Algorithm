#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    if(num1 < num2)
        swap(num1, num2);
    
    for(int i=0; i<my_string.length(); i++){
        if(i == num1)
            answer.push_back(my_string[num2]);
        else if(i == num2)
            answer.push_back(my_string[num1]);
        else
            answer.push_back(my_string[i]);
    }
    return answer;
}