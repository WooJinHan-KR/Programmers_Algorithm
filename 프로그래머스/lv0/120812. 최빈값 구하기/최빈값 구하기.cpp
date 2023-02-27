#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    int bindo[1000] = {0, };
    
    for(int i=0; i<array.size(); i++){
        bindo[array[i]]++;
    }

    int max = 0;
    int flag = 1;
    for(int j=0; j<1000; j++){
        if(bindo[j] > max){
            max = bindo[j];
            flag = 0;
            answer = j;
        }
        else if(bindo[j] == max && flag == 0){
            max = bindo[j];
            flag = 1;
            answer = -1;
        }
    }
    
    return answer;
}