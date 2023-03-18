#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int primenum[3000] = {0};

    for(int i=2; i<=sqrt(3000); i++)//에라토스테네스의 체
        if(primenum[i]==0)//2부터 찾고자하는 값의 루트값까지 돌면서
            for(int j=i*i; j<3000; j+=i)//찾고자 하는 값의 끝까지 배수를 곱해줌
                primenum[j] = 1;
    
    sort(nums.begin(), nums.end());//3개의 조합 쌍을 찾기 위해 정렬
    
    vector<bool> v(nums.size()-3, false);//n개 중에 3개를 뺀 값들은 다 false
	v.insert(v.end(), 3, true);//true 값에 걸리는 3개 자리만 출력해줌
	do {
		int sum = 0;
		for(int k=0; k<nums.size(); k++)
			if(v[k]) sum += nums[k];        
        if(primenum[sum]==0)//만약 3개 조합값을 다 더했는데 소수면 answer++
            answer++;
		} while (next_permutation(v.begin(), v.end()));//순열 stl 사용
    
    return answer;
}