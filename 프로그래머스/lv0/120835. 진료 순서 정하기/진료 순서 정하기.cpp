#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    for(int i=0; i<emergency.size(); i++){
        int num = 1;
        for(int j=0; j<emergency.size(); j++){
            if(emergency[i] < emergency[j])
                num++;
        }
        answer.push_back(num);
    }
    return answer;
}