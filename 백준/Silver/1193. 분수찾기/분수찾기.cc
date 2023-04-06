#include <stdio.h>

int number,d,t; // number 는 몇번쨰 분수, d는 대각선 위치 

int main(){
  scanf("%d", &number);   // 사용자 입력값 받기

  for(;d*(d+1)/2 < number;d++){  // 대각선 하나당 숫자가 1개씩 증가해서 모든 숫자들의 갯수를 더해줘서 몇번째 대각선에 사용자 입력값이 있는지 확인
  }

  t = number - d*(d-1)/2;  //  t는 대각선안에 몇번쨰 분수인지 찾아내는 변수
    // 14   -  5 * (4) /2 = 14 - 10 = ( t = 4 )

  if ( d % 2 == 0 ){  // 짝수번째 대각선은 위에서 아래
    printf("%d/%d", t, d-t+1);
  }

  else   // 홀수번째 대각선은 아래에서 위부터
  printf("%d/%d",d-t+1,t);

	return 0; 
}