#include <iostream>

using namespace std;

int main(){
    long long int x;
    int n;
    long long sum = 0;
    cin >> x;
    cin >> n; 
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        sum += a*b;
    }
    if(sum == x)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}