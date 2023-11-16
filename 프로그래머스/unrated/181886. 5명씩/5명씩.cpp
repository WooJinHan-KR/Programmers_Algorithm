#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    int index = 0;
    while(1){
        if(index < names.size())
            answer.push_back(names[index]);
        else
            break;
        index += 5;
    }
    return answer;
}