#include <iostream>
#include <string>

int main() {

    std::string s;
    int i;

    std::cin >> s;
    std::cin >> i;

    std::cout << s[i-1];

    return 0;
}