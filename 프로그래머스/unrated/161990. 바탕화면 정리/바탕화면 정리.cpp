#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lux, luy, rdx, rdy;//시작 xy, 끝 xy
    lux = 50, luy = 50, rdx = 1, rdy = 1;
    int n = wallpaper.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<wallpaper[i].size(); j++){
            if(wallpaper[i][j] == '#'){// i:x , j:y
                if(i<=lux)
                    lux = i;
                if(j<=luy)
                    luy = j;
                if(i>=rdx)
                    rdx = i+1;
                if(j>=rdy)
                    rdy = j+1;
            }
        }
    }
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    return answer;
}