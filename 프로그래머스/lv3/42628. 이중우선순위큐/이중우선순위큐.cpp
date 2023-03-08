#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    vector<int> v;
    for(int i=0; i<operations.size(); i++){
        if(operations[i][0] == 'I'){//시작이 I이면
            operations[i].erase(0, 2);//앞의 I, 공백 제거 후
            v.push_back(stoi(operations[i]));//문자열인 숫자를 정수로 변환해서 넣어줌
        }
        else{//시작이 D이면
            operations[i].erase(0, 2);//마찬가지로 앞에 제거 후
            if(operations[i][0] == '1'){//1로 시작하면
                sort(v.begin(), v.end());//오름차순으로 정렬해서
                if(!v.empty())//벡터v에 값이 있을때 최대값인 제일 뒤의 값 제거
                    v.pop_back();
            }
            else{
                sort(v.begin(), v.end(), greater<>());//반대로 내림차순으로 정렬해서
                if(!v.empty())
                    v.pop_back();//제일 뒤의 값 최소 값 제거
            }
        }
    }
 
    sort(v.begin(), v.end());//오름차순 정렬
    
    if(!v.empty()){//안비어 있으면 최대 최소 넣고
        answer.push_back(v.back());
        answer.push_back(v.front());
    }
    else{//비어 있으면 0, 0 넣기
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}