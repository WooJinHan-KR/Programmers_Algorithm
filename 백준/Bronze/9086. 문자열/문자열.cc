#include <iostream>
#include <string>

int main() {

    int n;
    std::cin >> n;

    for(int i=0; i<n; i++) {
        std::string a;
        std::cin >> a;
        std::cout << a[0] << a[a.length()-1] << std::endl;
    }


    return 0;
}