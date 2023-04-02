#include <iostream>
using namespace std;

int main(){
	int T; 
	int H, W, N; //층, 방, 몇번째 손님
	 
	scanf("%d", &T);
	
	int arr[T];
	
	for(int i=0; i<T; i++){
		int front = 0, back = 0;
		scanf("%d %d %d", &H, &W, &N);
		front = (N%H)*100;
		back = N/H + 1;
		if(front == 0){
			front = H*100;
			back--;
		}
		arr[i] = front + back;
	}
	
	for(int j=0; j<T; j++)
		printf("%d\n", arr[j]);
	 
}