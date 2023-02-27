#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<char> block;
    vector<char> left = {'[', '{', '('};
    vector<char> right = {']', '}', ')'};
    
    for(int i=0; i<s.size(); i++){//차례로 왼쪽으로 한칸씩 회전시키면서 체크
        int error = 0;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='['||s[j]=='{'||s[j]=='('){//왼쪽 괄호가 정상적으로 들어올때
                block.push_back(s[j]);//블록에 왼쪽괄호 넣어줌
            }   
            else if(s[j]==']'||s[j]=='}'||s[j]==')'){//오른쪽 괄호가 들어올때
                if(!block.empty()){//블록이 차있고
                    if(s[j]==']' && block.back() == '[')//블록에 마지막 괄호와 들어온 괄호가 짝을 이룰때
                       block.pop_back();//블록에 있는 왼쪽괄호 제거해줌
                    else if(s[j]=='}' && block.back()=='{')
                        block.pop_back();
                    else if(s[j]==')' && block.back()=='(')
                        block.pop_back();
                    else//만약에 블록이 일치하지 않으면 break 올바르지 않은 괄호 문자열
                        break;
                }
                else if(block.empty()){//블록이 비어있는데 잔여 괄호가 남아있으면 이또한 올바르지않음
                    error = 1;//에러 체크를 해주고 탈출
                    break;
                }
            }
        }
        if(block.empty() && error==0){//잔여 괄호들 없음
            answer++;//그리고 에러 체크도 안되어있다면 올바른 괄호 문자열이기 때문에 개수 더해줌
        }
        reverse(s.begin()+1, s.end());//왼쪽으로 한칸씩 이동시키는데 제일 앞의 수를 제외하고 나머지 뒤집어주고
        reverse(s.begin(), s.end());//그리고 나서 전체를 뒤집어 주면 제일 앞의 수를 한칸씩 왼쪽으로 옮기는것과 같음
    }
    return answer;
}