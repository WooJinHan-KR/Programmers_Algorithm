#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = board[0]/2;
    int y = board[1]/2;
    answer.push_back(0);
    answer.push_back(0);
    
    for(int i=0; i<keyinput.size(); i++){
        if(keyinput[i]=="up"){
            if(answer[1]+1 <= y)
                answer[1]++;
        }
        else if(keyinput[i]=="down"){
            if(answer[1]-1 >= y*-1)
                answer[1]--;
        }
        else if(keyinput[i] == "left"){
            if(answer[0]-1 >= x*-1)
                answer[0]--;
        }
        else if(keyinput[i] == "right"){
            if(answer[0]+1 <= x)
                answer[0]++;
        }
        cout << answer[0] << ","<<answer[1] << "  ";
    }
    return answer;
}