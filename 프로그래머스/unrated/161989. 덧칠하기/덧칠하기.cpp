#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<int> wall(n, 1);
    
    for(int i=0; i<section.size(); i++)
        wall[section[i]-1] = 0;
    
    for(int i=0; i<n; i++){//처음부터 보면서
        if(wall[i]==0 && i+m < n){//안칠해져있고 쭈욱 칠해서 안넘어가면
            for(int j=i; j<i+m; j++){
                wall[j] = 1;//칠할수 있는 벽까지 쭈욱 칠해주기
            }
            i+=m-1;//벽 다 칠해줬으니 인덱스 칠한 벽으로 바꿔주기
            answer++;//칠한 횟수 +
        }
        else if(wall[i]==0 && i+m >= n){//안칠한 벽이 있는데 다 칠하면 끝을 넘어갈때
            answer++;//다 칠해버리고
            break;//탈출
        }
    }   
    return answer;
}