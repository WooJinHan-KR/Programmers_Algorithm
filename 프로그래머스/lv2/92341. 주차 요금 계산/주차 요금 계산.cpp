#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
#include <cmath>

using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first < b.first;
	}
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    vector<pair<int,int>> DB;//차량 번호, 요금
    vector<bool> outcheck;
    for(int i=0; i<records.size(); i++){
        if(records[i].substr(11, 2) == "IN"){
            int carnum = 0;
            carnum = stoi(records[i].substr(6, 4));
            auto it = find_if(DB.begin(), DB.end(), [carnum](const pair<int, int>& p) {
                return p.first == carnum;
            });//이미 한번 입차한 경험이 있으면
            int intime = 0;
            intime = stoi(records[i].substr(0, 2))*-60 + stoi(records[i].substr(3, 2))*-1;
            if(it!=DB.end()) {//입차 경험이 있으면 그대로 시간 누적해서 계산
                it->second += intime;
            }
            else//없으면 그냥 새로 값 푸쉬*/
                DB.push_back(make_pair(stoi(records[i].substr(6, 4)), intime));
        }
        else{
            int carnum = 0;
            carnum = stoi(records[i].substr(6, 4));
            auto it = find_if(DB.begin(), DB.end(), [carnum](const pair<int, int>& p) {
                return p.first == carnum;
            });
            int outtime = 0;
            outtime = stoi(records[i].substr(0, 2))*60 + stoi(records[i].substr(3, 2));
            if(it!=DB.end())
                it->second += outtime;
            
        }
    }
    
    for(int i=0; i<DB.size(); i++){
        int basic_min = fees[0];
        int basic_fee = fees[1];
        double per_min = fees[2];
        int per_fee = fees[3];
        
        if(DB[i].second <= 0){
            DB[i].second += 23*60+59;
        }
        
        if(DB[i].second <= basic_min)
            DB[i].second = basic_fee;
        else
            DB[i].second = basic_fee + ceil((DB[i].second-basic_min)/per_min) * per_fee;
    }
    
    sort(DB.begin(), DB.end(), compare);
   
    for(int i=0; i<DB.size(); i++)
        answer.push_back(DB[i].second);

    return answer;
}