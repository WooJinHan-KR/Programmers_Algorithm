#include <string>
#include <vector>
#include <iostream>

int solution(std::vector<std::string> babbling) {
    
    int answer = 0;    
    
    for(int i=0; i<babbling.size(); i++){
        
        int flag = 0;
        for(int j=0; j<babbling[i].size(); j++){
            if(babbling[i].substr(j, 3)=="aya") j+=2;
            else if(babbling[i].substr(j, 2)=="ye") j+=1;
            else if(babbling[i].substr(j, 3)=="woo") j+=2;
            else if(babbling[i].substr(j, 2)=="ma") j+=1;
            else{
                flag = 1;
                break;
            }
        }

        if(!flag) answer++;
    }
    
    return answer;
}