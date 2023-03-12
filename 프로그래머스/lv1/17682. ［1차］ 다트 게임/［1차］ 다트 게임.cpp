#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector <int>record;
    for(int i=0; i<dartResult.size(); i++){
        if(dartResult[i] == '1' && dartResult[i+1] == '0'){
            record.push_back(10);
            i++;
        }
        else if(dartResult[i] >= '0' && dartResult[i] <= '9')
            record.push_back(dartResult[i] - '0');
        else if(dartResult[i] == '*'){
            if(record.size()>=2){
                record[record.size()-1]*=2;
                record[record.size()-2]*=2;
            }
            else
                record[record.size()-1]*=2;
        }
            
        else if(dartResult[i] == '#')
            record[record.size()-1]*=-1;
        else if(dartResult[i] == 'D')
            record[record.size()-1]*=record[record.size()-1];
        else if(dartResult[i] == 'T')
            record[record.size()-1]*=pow(record[record.size()-1], 2);
    }
    for(int i=0; i<record.size(); i++)
        answer += record[i];
    return answer;
}