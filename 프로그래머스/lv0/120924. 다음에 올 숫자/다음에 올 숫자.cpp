#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int check;
    int r = 0;
    if(common[2]-common[1] == common[1]-common[0]){
        r = common[2]-common[1];
        check = 2;
    }
    else{
        r = common[2]/common[1];
        check = 1;
    }
    
    if(check == 1)
        answer = common.back() * r;
    else
        answer = common.back() + r;
    return answer;
}