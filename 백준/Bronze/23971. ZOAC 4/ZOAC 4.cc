#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int h, w, n, m;

    scanf("%d%d%d%d", &h, &w, &n, &m);

    cout << ((w - 1)/(m + 1) + 1) * ((h - 1)/(n + 1) + 1);
    
    return 0;
}