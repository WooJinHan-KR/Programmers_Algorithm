#include <string>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

string answer = "";

void toBinary(unsigned int n)
{
    if (n / 2 != 0) {
        toBinary(n / 2);
    }
    answer += to_string(n % 2);
}

string solution(string bin1, string bin2) {
    int bin1s = bin1.size()-1;
    int bin2s = bin2.size()-1;
    int bin1_10 = 0;
    int bin2_10 = 0;
    for(int i=0; i<bin1.size(); i++){
        bin1_10 += (bin1[i]-48) * pow(2,bin1s);
        bin1s--;
    }
    for(int i=0; i<bin2.size(); i++){
        bin2_10 += (bin2[i]-48) * pow(2,bin2s);
        bin2s--;
    }
    
    toBinary(bin1_10+bin2_10);
    
    return answer;
}