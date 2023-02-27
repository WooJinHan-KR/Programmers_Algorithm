#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string a = to_string(num);
    
    for(int i=0; i<a.length(); i++){
        if(a[i] == k+48){
            answer = i+1; 
            break;
        }
            
    }
    
    if(answer == 0)
        answer = -1;
    
    return answer;
}