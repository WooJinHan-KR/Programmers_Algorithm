#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    //0 0 1 25 31 44    로또
    //1 6 10 19 31 45   윈넘버
    int index_l = 0;
    int index_w = 0;
    int count = 0;
    int zerocount = 0;
    for(int i=0; i<6; i++)
        if(lottos[i]==0)
            zerocount++;
    
    while(1){
        if(index_l>6 || index_w>6)
            break;
        
        if(lottos[index_l] > win_nums[index_w]){//적은번호가 더 클때
            index_w++;
        }
        else if(lottos[index_l] == win_nums[index_w]){//두 번호 일치할때
            index_l++;
            index_w++;
            count++;
        }
        else{//적은번호가 더 작을때
            index_l++;
        }
    }
    answer.push_back(7-count-zerocount);
    answer.push_back(7-count);
    if(answer.front()==7)
        answer[0]=6;
    if(answer.back()==7)
        answer[1]=6;
    return answer;
}