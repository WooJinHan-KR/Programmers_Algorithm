#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.length(); i++){
        int flag = 1;
        for(int j=0; j<answer.length(); j++){
            if(my_string[i] == answer[j])
                flag = 0;
        }
        if(flag == 1)
            answer.push_back(my_string[i]);
    }
    
    return answer;
}