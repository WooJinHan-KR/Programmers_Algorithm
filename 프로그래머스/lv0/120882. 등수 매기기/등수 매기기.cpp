#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> avg;
    for(int i=0; i<score.size(); i++){
        double a = score[i][0];
        double b = score[i][1];
        double aver = (a+b)/2;
        avg.push_back(aver);
        }//왜 그런지는 모르겠는데 double 형으로 캐스팅이 안되네..? 의아한걸 간편하게 double 변수 선언해서 정리
    for(int a=0; a<avg.size(); a++){
        int rank = 1;
        for(int b=0; b<avg.size(); b++){
            if(avg[a] <= avg[b]){
                rank++;
                if(avg[a] == avg[b])
                    rank--;
            }
        }
        answer.push_back(rank);
    }
    
    return answer;
}