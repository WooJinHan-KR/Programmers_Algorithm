#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    cin >> a;
    vector<int> arr;
    for(int i=0; i<a; i++){
        int b;
        cin >> b;
        arr.push_back(b);
    }
    sort(arr.begin(), arr.end());
    if(a==1)
        cout << arr[0]*arr[0];
    else
        cout << arr[0]*arr[arr.size()-1];
    return 0;
}