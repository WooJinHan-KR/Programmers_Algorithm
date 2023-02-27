#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string change(int a, int n){
    string num = "";
    while(a){
        if(a%2==0)
            num.push_back(' ');
        else
            num.push_back('#');
        a/=2;
    }
    if(num.size() < n){
        while(num.size() < n)
            num.push_back(' ');
    }
        
    reverse(num.begin(), num.end());
    return num;
        
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0; i<n; i++){
        string arr_1 = "";
        string arr_2 = "";
        string sum = "";
        arr_1 = change(arr1[i], n);
        arr_2 = change(arr2[i], n);
        cout << arr_1 << "|" << arr_2 << endl;
        for(int j=0; j<n; j++){
            if(arr_1[j]=='#' || arr_2[j]=='#')
                sum.push_back('#');
            else
                sum.push_back(' ');
        }
        answer.push_back(sum);
    }
    return answer;
}