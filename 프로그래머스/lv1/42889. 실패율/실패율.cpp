#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<double, int>a, pair<double, int>b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first > b.first;
	}
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> dojeon_ing(N+1, 0);
    vector<double> dojeon_fin(N+1, 0);
    vector<pair<double, int>> percent;//실패율, 단계
    
    for(int i=0; i<stages.size(); i++)
        dojeon_ing[stages[i]-1]++;
    
    double sum=0;
    for(int i=N; i>=0; i--){
        sum += dojeon_ing[i];
        dojeon_fin[i] = sum;
    }
    
    for(int i=0; i<N; i++){
        if(dojeon_fin[i]==0)
            percent.push_back(make_pair(0, i+1));
        else
            percent.push_back(make_pair(dojeon_ing[i]/dojeon_fin[i], i+1));
    }
    
    sort(percent.begin(), percent.end(), compare);
        
    for(int i=0; i<percent.size(); i++)
        answer.push_back(percent[i].second);
    
    return answer;
}