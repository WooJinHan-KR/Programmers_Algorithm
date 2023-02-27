#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include<cstdlib>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int max = 100;
    sort(array.begin(), array.end());
    for(int i=0; i<array.size(); i++){
        if(abs(n-array[i]) < max){
            max = abs(n-array[i]);
            answer = array[i];
        }
    }
    return answer;
}