#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size()-4;
    for(int i=0; i<length; i++)
        answer += '*';
    for(int j=length; j<length+4; j++)
        answer += phone_number[j];
    return answer;
}