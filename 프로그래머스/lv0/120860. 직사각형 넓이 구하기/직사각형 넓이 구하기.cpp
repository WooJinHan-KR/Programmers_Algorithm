#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x_max, x_min = dots[0][0];
    int y_max, y_min = dots[0][1];

    for(int i=0; i<4; i++){
        if(x_max <= dots[i][0])
            x_max = dots[i][0];
        
        if(y_max <= dots[i][1])
            y_max = dots[i][1];
    }
    
    for(int j=0; j<4; j++){
        if(x_min > dots[j][0])
            x_min = dots[j][0];
    
        if(y_min > dots[j][1])
            y_min = dots[j][1];
        
    }
    cout << x_max-x_min << " " << y_max-y_min ;
    
    answer = (x_max-x_min)*(y_max-y_min);
        
    
    return answer;
}