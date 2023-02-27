#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, idx = 0;//구명보트의 개수와 남은 사람 수
    sort(people.begin(), people.end());//사람 몸무게로 오름차순 정렬
    while(people.size() > idx){//모든 사람들이 내릴때 까지
        int back = people.back();//제일 무거운 사람을 먼저 뽑아서
        people.pop_back();
        if(people[idx] + back <= limit){//만약 제일 무거운 사람이 가벼운 사람과 탈출 할 수 있다면
            answer++;//구명보트 카운트
            idx++; 
        }//둘을 탈출시킴
        else answer++;//안된다면 몸무게 무거운 사람 혼자 탈출
    }
    
    return answer;
}