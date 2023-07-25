#include <iostream>
#include <deque>

int main()
{
	std::deque<int> que;
	int N, M;
	int index;
	int answer = 0;
	std::cin >> N >> M; 
	
	for(int i=1; i<=N; i++)
		que.push_back(i);
		
	for(int j=0; j<M; j++){
		int temp;
		std::cin >> temp;
		//삭제할 원소 받음 
		for(int k=0; k<que.size(); k++){
			if(que[k] == temp){
				index = k;
				break;
			}
		}
		//que를 돌면서 데큐 안에 삭제할 원소의 인덱스 찾아냄 
		
		if(index <= (que.size() / 2)){//삭제할 원소의 인덱스가 중간보다 작을때  
			while(1){
				if(que.front() == temp){
					que.pop_front();
					break;
				}
				++answer;
				que.push_back(que.front());
				que.pop_front();
				//제일 앞의 원소를 뽑아 뒤에 삽입 
			}			
		}
		else{//삭제할 원소의 인덱스가 중간보다 클때  
			while(1){
				if(que.front() == temp){
					que.pop_front();
					break;
				}
				++answer;
				que.push_front(que.back());
				que.pop_back();
				//제일 뒤의 원소 뽑아서 앞에 삽입 
			}
		}
	}
	
	std::cout << answer;
	
	return 0;
}