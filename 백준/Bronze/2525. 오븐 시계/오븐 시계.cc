#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    cin >> c;
    int sum = a*60 + b + c;
    if(sum >= 1440)
        sum -= 1440;
    a = sum/60;
    b = sum%60;
    cout << a << " " << b;
    return 0;
}