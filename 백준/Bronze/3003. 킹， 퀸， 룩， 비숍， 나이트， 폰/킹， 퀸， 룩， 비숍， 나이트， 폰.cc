#include <iostream>

int main(){
    int arr[6] = {1, 1, 2, 2, 2, 8};
    int a;

    for(int i = 0; i < 6; ++i) {
        std::cin >> a;
        std::cout << arr[i] - a << " ";
    }
    
    return 0;
}
