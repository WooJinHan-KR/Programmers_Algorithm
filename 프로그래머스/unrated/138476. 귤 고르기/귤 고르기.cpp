#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> arr;
    int n = tangerine.size();
    sort(tangerine.begin(), tangerine.end());//귤 개수 정렬
    int count = 1;
    for(int i=0; i<n-1; i++){
        if(tangerine[i]!=tangerine[i+1]){
            arr.push_back(count);
            count = 1;
        }//귤 개수가 앞뒤랑 다르면 귤 셌던 카운트 출력하고 카운트는 초기화
        else if(tangerine[i]==tangerine[i+1] && i==n-2)
            arr.push_back(count+1);
        //만약 귤이 끝까지 갔는데 끝에서 똑같이 끝나면 값 넣어줌
        else if(tangerine[i]==tangerine[i+1])
            count++;//귤 값이 같으면 계속 셈
    }
    
    if(tangerine[n-2]!=tangerine[n-1])//마지막 귤과 그 앞의 귤이 다를때 마지막 하나 귤 개수 더해줌
        arr.push_back(1);
    
    sort(arr.begin(), arr.end(), greater<>()); // 역순으로 정렬

    int tangercount = 0;
    for(int i=0; i<arr.size(); i++){
        tangercount+=arr[i];
        if(tangercount >= k){
            answer = i+1;
            break;
        }//귤 개수 많은대로 집어넣다가 상자 꽉차면 탈출 후 귤 개수 파악
    }
    
    return answer;
}