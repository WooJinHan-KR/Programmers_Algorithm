#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    int minindex;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < min){
            min = arr[i];
            minindex = i;
        }
    }
    for(int j=0; j<arr.size(); j++){
        if(j == minindex)
            continue;
        answer.push_back(arr[j]);
    }
    if(arr.size() == 1)
        answer = {-1};
    return answer;
}