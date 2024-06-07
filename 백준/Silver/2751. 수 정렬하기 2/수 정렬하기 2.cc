#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    int N;
    std::cin >> N;

    std::vector<int> arr;
    
    for(int i=0; i<N; i++) {
        int a;
        std::cin >> a;
        arr.push_back(a);
    }

    std::sort(arr.begin(), arr.end());

    for(int j=0; j<N; j++) {
        std::cout << arr[j] << '\n';
    }

    return 0;
}