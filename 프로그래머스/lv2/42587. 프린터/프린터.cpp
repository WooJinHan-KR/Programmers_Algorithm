#include <string>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int time = priorities.size();
    vector<int> vec;
    vector<int> stack;//뺀거 넣는 곳
    
    for(int i=0; i<time; i++)
        vec.push_back(priorities[i]);//새로운 벡터에 중요도 벡터 그대로 넣어줌
    
    while(location >= 0){//location이 -1이 되면 원하는 문서가 출력됨
        int max = *max_element(vec.begin(), vec.end());//max는 벡터의 값중에 제일 중요도가 높은 값
        if(vec.front() == max){//만약 제일 앞에 있는 값이 max값이면
            vec.erase(vec.begin());
            location--;//제일 앞에있는값 프린트하고 location도 한칸 앞당겨줌
        }
        else{
            int temp = 0;
            temp = vec.front();
            vec.erase(vec.begin());//앞에 값 지워서
            vec.push_back(temp);//대기열 맨 뒤로 넘겨줌
            if(location == 0)
                location = vec.size()-1;//만약에 뽑으려는 순서가 왔는데도 중요도가 밀린다면 맨 뒤로 넘김
            else
                location--;//뽑으려는 순서가 아닌 친구가 오면 뽑으려는 순서 하나 당겨줌
        }
    }
    
    answer = priorities.size() - vec.size();
    
    return answer;
}