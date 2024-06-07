#include <iostream>

int main() {

    int n, m;
    std::cin >> n >> m;
    int arr[n+1];
    for(int i=1; i<n+1; i++)
        arr[i] = i;

    for(int i=0; i<m; i++) {
        int num1, num2;
        int a = 0;
        std::cin >> num1 >> num2;
        a = arr[num1];
        arr[num1] = arr[num2];
        arr[num2] = a;
    }

    for(int j=1; j<n+1; j++)
        std::cout << arr[j] << ' ';

    return 0;
}