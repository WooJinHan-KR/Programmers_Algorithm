#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string a = "";
    for(int i=0; i<numbers.size();){
        if(numbers[i] == 'z')
            a.push_back('0'), i+=4;
        else if(numbers[i] == 'o')
            a.push_back('1'), i+=3;
        else if(numbers[i]=='t' && numbers[i+1]=='w')
            a.push_back('2'), i+=3;
        else if(numbers[i]=='t' && numbers[i+1]=='h')
            a.push_back('3'), i+=5;
        else if(numbers[i]=='f' && numbers[i+1]=='o')
            a.push_back('4'), i+=4;
        else if(numbers[i]=='f' && numbers[i+1]=='i')
            a.push_back('5'), i+=4;
        else if(numbers[i]=='s' && numbers[i+1]=='i')
            a.push_back('6'), i+=3;
        else if(numbers[i]=='s' && numbers[i+1]=='e')
            a.push_back('7'), i+=5;
        else if(numbers[i]=='e')
            a.push_back('8'), i+=5;
        else if(numbers[i]=='n')
            a.push_back('9'), i+=4;
    }
    
    answer = stol(a);
    
    return answer;
}