#include <stdio.h>

// 앞으로 사용할 함수 선언
int power(int, int);

// main 절
void main(){
  // 밑, 지수와 계산결과 선언
  int base, exponent, result;

  // 입력 안내
  printf("밑수: ");
  scanf("%d", &base);
  printf("지수: ");
  scanf("%d", &exponent);

  // 결과를 함수를 호출하여 받기
  result = power(base, exponent);
  // 결과 출력
  printf("%d^%d = %d\n", base, exponent, result);
}

// 밑과 지수를 매개변수로 받는 제곱 함수 정의
int power(int base, int exponent){
  // 지수가 0이 아닐때까지 순환호출
  if(exponent != 0)
    return (base * power(base, exponent - 1));
  // 지수가 0이면 1을 곱해서 마무리
  else
    return 1;
}
