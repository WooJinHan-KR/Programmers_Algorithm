#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector <int> a;
    int num = 1;
    a.push_back(0);
    for(int i=1; i<300; i++){
        if((to_string(num).find("3") != string::npos) || (num%3==0))
            num++;
        else{
            a.push_back(num);
            num++;
            cout << a.back() << " ";
        }
    }
    answer=a[n];
    return answer;
}