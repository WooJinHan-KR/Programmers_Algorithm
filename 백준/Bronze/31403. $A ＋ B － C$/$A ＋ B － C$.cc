#include <iostream>
#include <string>

int main() {

    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << a+b-c << std::endl;
    std::cout << std::stoi(std::to_string(a).append(std::to_string(b))) - c << std::endl;

    return 0;
}