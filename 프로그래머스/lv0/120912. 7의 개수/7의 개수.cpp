#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string arr = "";
    //arr.append(to_string(array[0]));
    for(int i=0; i<array.size(); i++){
        arr.append(to_string(array[i]));
    }
    for(int j=0; j<arr.size(); j++){
        if(arr[j] - 48 == 7)
            answer++;
    }
    return answer;
}