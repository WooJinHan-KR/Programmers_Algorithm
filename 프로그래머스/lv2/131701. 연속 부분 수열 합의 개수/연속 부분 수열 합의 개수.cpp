#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iostream>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int n = elements.size();
    vector<int> result;
    
    result.push_back(accumulate(elements.begin(), elements.end(), 0));
    
    for(int i=0; i<n; i++)
        elements.push_back(elements[i]);
    
    for(auto it : elements)
        cout << it << " ";

    for(int i=1; i<n; i++){//뽑을 원소의 개수
        for(int j=0; j<n; j++){//스타트하는 지점(처음부터 끝까지 한번씩만 돌음)
            int sum = 0;
            for(int k=j; k<i+j; k++)//스타트 하는 지점부터 정해진 개수를 세면서
                sum += elements[k];
            result.push_back(sum);
        }
    }
    
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    answer = result.size();
    return answer;
}