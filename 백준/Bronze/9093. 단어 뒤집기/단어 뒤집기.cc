#include <iostream>
#include <stack>
#include <string>

int main() {

    int N;
    std::cin >> N;
    std::cin.ignore(); // 개행 문자를 무시하기 위해 추가

    for(int i = 0; i < N; i++) {
        std::string a, b;
        std::getline(std::cin, a);
        std::stack<char> st;

        for(int j = 0; j < a.size(); j++) {
            if(a[j] == ' ') {
                while(!st.empty()) {
                    b.push_back(st.top());
                    st.pop();
                }
                b.push_back(' ');
            }
            else {
                st.push(a[j]);
            }
        }

        // 마지막 단어 뒤집기
        while(!st.empty()) {
            b.push_back(st.top());
            st.pop();
        }

        std::cout << b << std::endl;
    }

    return 0;
}
