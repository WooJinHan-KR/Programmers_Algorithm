#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int count = brown + yellow;
    int x, y;//xy=brown+yellow
    int y_x, y_y;//x = y_x+2, y=y_y+2
    for(int i=1; i<=yellow; i++){
        if(yellow%i==0){
            y_x = yellow/i;
            y_y = i;
            x = y_x+2, y=y_y+2;
            if(x*y == count){
                answer.push_back(x);
                answer.push_back(y);
                break;
            }
        }
    }
    
    return answer;
}