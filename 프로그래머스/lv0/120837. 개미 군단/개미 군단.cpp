#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int jangun = 5;
    int beoyng = 3;
    int ill = 1;
    
    /*if(hp % jangun == 0){
        answer += (hp/jangun);
    }
    else{
        answer += (hp/jangun)
    }*/
    
    answer += (hp/jangun);
    answer += (hp%jangun)/beoyng;
    answer += (hp%jangun)%beoyng;
    
    return answer;
}