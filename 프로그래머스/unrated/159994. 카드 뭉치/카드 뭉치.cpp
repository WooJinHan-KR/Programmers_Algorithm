#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int index_1 = 0, index_2 = 0;
    for(int i=0; i<goal.size(); i++){
        if(cards1[index_1]==goal[i]){
            index_1++;
        }
        else if(cards2[index_2]==goal[i]){
            index_2++;
        }
        else{
            answer = "No";
            break;
        }
    }
    return answer;
}