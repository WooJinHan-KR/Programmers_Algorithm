#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int answer = 0;
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != nums[i+1]){
            count++;
            cout << nums[i] << " ";
        }
            
    }
    if(count>nums.size()/2)
        answer = nums.size()/2;
    else
        answer = count;
    
    return answer;
}