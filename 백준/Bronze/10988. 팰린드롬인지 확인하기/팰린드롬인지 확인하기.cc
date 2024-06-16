#include <iostream>
#include <string>

int main() {
    std::string a;
    std::cin >> a;
    for(int i = 0; i < a.size() / 2; ++i) {
        if(a[i] != a[a.size() - 1 - i]) {
            std::cout << "0";
            return 0;
        }
    }
    std::cout << "1";
    return 0;
}
