#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*while 문 안에
처음부터 시작
인덱스가 100 이상이 될 때 까지 날 수를 진행
100 넘으면 처음부터 끝까지 검사해서 완료된 애들 카운트해서 배출하고 벡터에서 제거
현재 인덱스도 당연히 제거
다됐으면 다시 처음부터 시작
만약 빠진애들이 전체 개수랑 일치하면 종료*/

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    while(!progresses.empty()){//남은 일이 없을때까지 실행
        int remainprogress = 100 - progresses[0];//남은 일의 퍼센티지
        int remainday = 0;//남은 일의 퍼센티지를 계산해 남은 날짜
        int count = 0;//무조건 첫번째 기능을 배포할때 같이 배포되는 기능이 몇개인지 카운트
        int front = 0;//앞선 기능들이 연속적으로 배포되어야 뒤의 기능도 배포되기 때문에 front가 1로 바뀌면 그 뒤의 기능들은 배포 대기 상태
        
        if(remainprogress%speeds[0]==0)//남은 정도가 속도와 나누어 떨어지지 않으면 하루 일을 더해야함
            remainday = remainprogress/speeds[0];
        else
            remainday = remainprogress/speeds[0] + 1;
            
        for(int i=0; i<progresses.size(); i++){//첫번째 기능을 다 배포했을때 
            if(progresses[i] + speeds[i]*remainday >= 100 && front == 0){
                progresses.erase(progresses.begin() + i);
                speeds.erase(speeds.begin() + i--);//완료된 기능 제거
                count++;//처음부터 끝까지 가면서 완료된 기능은 count세준다
            }
            else if(progresses[i] + speeds[i]*remainday >= 100 && front == 1)
                progresses[i] += speeds[i];//완료는 됐는데 앞의 기능이 배포되지 않았으면 대기
            else{//연속해서 앞의 기능이 완료되지 않았을때
                front = 1;//배포 대기 상태로 전환
                progresses[i] += speeds[i];//일이 지났을때 얼마나 기능이 완성됐는지만 계산
            }
        }
        answer.push_back(count);//정답에 배포된 기능 개수 기록
    }
    return answer;
}