#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string half = "";//반절만 임시 저장할 문자열 선언 
    int sum = 1;
    
    for(int i=1; i<food.size(); i++)//첫번째 0을 제외하고 끝까지
        for(int j=0; j<food[i]/2; j++)//음식의 개수에서 반절을 나눈 개수를 세팅
            half += to_string(i);//문자열로 바꿔서 추가

    answer = answer + half + "0";//반절 음식 + 물 세팅
    reverse(half.begin(), half.end());//반절 음식 문자열을 그대로 뒤집어서
    answer += half;//그대로 오른쪽에 가져다 붙임
    return answer;
}