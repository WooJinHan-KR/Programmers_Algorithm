#include <iostream>
#include <algorithm>
#include <cstdio>
#include <unordered_map>

int main(){
    
    int N, M;
    std::scanf("%d", &N);
    
    //int* card = new int[N];
    std::unordered_map<int, int> card;
    for(int i=0; i<N; ++i){
        int number;
        std::scanf("%d", &number);
        card[number]++;
    }
 
    std::scanf("%d", &M);
    
    //int* number = new int[M];
    for(int i=0; i<M; ++i){
        //std::scanf("%d", &number[i]);
        int num;
        std::scanf("%d", &num);
        std::printf("%d ", card[num]);
    }
        
    
    
    
    return 0;
}