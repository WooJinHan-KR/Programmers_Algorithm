#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int count = 0;
    string a = "";
    
    for(int i=0; i<my_str.size(); i++){
        a.push_back(my_str[i]);
        if((i+1)%n==0){
            answer.push_back(a);
            a = "";
        }
        else if(i==my_str.size()-1)
            answer.push_back(a);
    }
    
    return answer;
}