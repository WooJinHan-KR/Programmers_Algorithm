#include <iostream>
#include <vector>

int main() {

	int n, m, a;
    std::vector<std::vector<int>> A, B;
    std::cin >> n >> m;
	
    for(int i=0; i<n; i++) {
        std::vector<int> arrA;
        for(int j=0; j<m; j++) {
            std::cin >> a;
            arrA.push_back(a);
        }
        A.push_back(arrA);
    }

    for(int i=0; i<n; i++) {
        std::vector<int> arrB;
        for(int j=0; j<m; j++) {
            std::cin >> a;
            arrB.push_back(a);
        }
        B.push_back(arrB);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            std::cout << A[i][j] + B[i][j] << " ";
        }
        std::cout << std::endl;
    }


}