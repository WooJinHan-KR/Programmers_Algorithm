#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    //2월29일
    string answer = "";
    vector<int> month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    vector<string> day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int count = 0;
    for(int i=0; i<a; i++)
        count+=month[i];
    
    count+=b;
    
    answer = day[count%7];
    
    
    return answer;
}