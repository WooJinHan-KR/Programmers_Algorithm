#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";
    string flag = "plus";
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]>='0' && my_string[i]<='9'){
            num.push_back(my_string[i]);
        }
        else if(my_string[i]=='+' || my_string[i]=='-'){
            if(flag == "plus")
                answer += stoi(num);
            else
                answer -= stoi(num);
            if(my_string[i] == '+')
                flag = "plus";
            else if(my_string[i] == '-')
                flag = "minus";
            num = "";
        }
        
    }
    if(flag == "plus")
        answer += stoi(num);
    else
        answer -= stoi(num);
    return answer;
}