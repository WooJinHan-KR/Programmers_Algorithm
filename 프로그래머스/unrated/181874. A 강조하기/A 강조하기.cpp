#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i=0; i<myString.size(); i++){
        if(myString[i] == 'a')
            answer += 'A';
        else if(isupper(myString[i]) && myString[i]!='A')
            answer += tolower(myString[i]);
        else 
            answer += myString[i];
    }
    return answer;
}