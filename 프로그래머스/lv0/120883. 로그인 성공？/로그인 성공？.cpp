#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    int flag = 0;
    for(int i=0; i<db.size(); i++){
        if(id_pw[0]==db[i][0] && id_pw[1]==db[i][1]){
            answer = "login";
            flag = 1;
            break;
        }          
        else if(id_pw[0]==db[i][0] && id_pw[1]!=db[i][1]){
            answer = "wrong pw";
            flag = 1;
            break;
        }            
    }
    
    if(flag == 0)
        answer = "fail";
    
    return answer;
}