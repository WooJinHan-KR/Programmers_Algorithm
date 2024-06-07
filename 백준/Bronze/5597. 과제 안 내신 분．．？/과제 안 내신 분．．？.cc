#include <iostream>

int main() {

    int arr[31] = {0, };
    for(int i=1; i<31; i++) {
        int a;
        std::cin >> a;
        arr[a] = 1;
    }
    for(int j=1; j<31; j++) {
        if(!arr[j])
            std::cout << j << std::endl;
    }
    return 0;
}