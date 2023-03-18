#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int count_x = 0;
    string word = "";
    char firstword;
    for(int i=0; i<s.size(); i++){
        if(word.size()==0){
            word+=s[i];
            firstword = s[i];
            count_x++;
        }
        else{//이미 있어
            if(s[i]==firstword){//들어온 수와 firstword가 같아
                word+=s[i];
                count_x++;
            }
            else{//들어온 수가 firstword랑 달라
                word+=s[i];
                if(word.size()==count_x*2){//다른 문자와 첫번째 문자의 개수가 같아지면
                    answer++;//문자열 개수 ++
                    word = "";//저장된 문자열 초기화
                    count_x=0;
                    //firstword = '';
                }
            }
        }
        
        if(word.size()!=0 && i==s.size()-1)
            answer++;
        
    }
    return answer;
}