#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size() > arr2.size())
        answer = 1;
    else if(arr1.size() < arr2.size())
        answer = -1;
    else{
        int arr1sum = accumulate(arr1.begin(), arr1.end(), 0);
        int arr2sum = accumulate(arr2.begin(), arr2.end(), 0);
        if(arr1sum > arr2sum)
            answer = 1;
        else if(arr1sum < arr2sum)
            answer = -1;
        else
            answer = 0;
    }
    return answer;
}