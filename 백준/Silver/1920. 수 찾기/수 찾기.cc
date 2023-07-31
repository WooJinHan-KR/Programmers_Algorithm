#include <cstdio>
#include <algorithm>

int main() {
    int N, M;
    std::scanf("%d", &N);

    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        std::scanf("%d", &arr[i]);
    }

    std::sort(arr, arr + N); // 배열을 정렬합니다.

    std::scanf("%d", &M);

    for (int i = 0; i < M; ++i) {
        int num;
        std::scanf("%d", &num);

        // 이분 탐색을 사용하여 해당 숫자가 존재하는지 확인합니다.
        bool exists = std::binary_search(arr, arr + N, num);

        if (exists) {
            std::printf("1\n");
        } else {
            std::printf("0\n");
        }
    }

    delete[] arr;

    return 0;
}
