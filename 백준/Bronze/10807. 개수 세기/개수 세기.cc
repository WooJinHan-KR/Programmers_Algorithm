#include <iostream>
#include <vector>

int main(){
    int N;
    std::cin >> N;
    std::vector<int> arr;
    for(int i=0; i<N; i++){
        int a;
        std::cin >> a;
        arr.push_back(a);
    }
    int h;
    int count = 0;
    std::cin >> h;
    for(int j=0; j<N; j++)
        if(arr[j]==h)
            count++;
    std::cout << count;
    return 0;
}