#include <iostream>
#include <algorithm>

int main() {
    while (true) {
        int a, b, c;

        // 세 변의 길이를 입력받음
        std::cin >> a >> b >> c;

        // 입력이 0 0 0이면 종료
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        // 세 변의 길이로 삼각형의 조건을 판별
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                std::cout << "Equilateral\n";
            } else if (a == b || b == c || c == a) {
                std::cout << "Isosceles\n";
            } else {
                std::cout << "Scalene\n";
            }
        } else {
            std::cout << "Invalid\n";
        }
    }

    return 0;
}
