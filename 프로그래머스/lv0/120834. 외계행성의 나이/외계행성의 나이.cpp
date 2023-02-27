#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string ag = "";
    ag = to_string(age);
    
    for(int i=0; i<ag.length(); i++){
        answer.push_back(ag[i] + 49);
    }
    return answer;
}