#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    vector<vector<string>> morse = { {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"}, {"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"}, {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"}, {"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"}, {"-.--","y"},{"--..","z"}};
    
    stringstream ss1(letter);
    string mos;
    while (ss1 >> mos){
        for(int i=0; i<morse.size(); i++){
            if(morse[i][0] == mos)
                answer += morse[i][1];
        }
    } 
    return answer;
}