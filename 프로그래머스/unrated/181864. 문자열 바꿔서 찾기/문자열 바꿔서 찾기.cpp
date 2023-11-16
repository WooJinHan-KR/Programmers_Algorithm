#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    
    for(int i=0; i<myString.size(); i++)
        myString[i] == 'A' ? myString[i] = 'B' : myString[i] = 'A';
    
    return myString.find(pat) != string::npos ? 1 : 0;
}