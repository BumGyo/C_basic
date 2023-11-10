#include <stdio.h>

// 앞으로 사용할 함수 미리 선언
void hap(int, int);
void cha(int, int);
void gop(int, int);
void mok(int, int);

// main 절
void main() {
  // 연산에 사용할 변수와 while문 사용시 반복할 i 선언
  int x, y, i = 0;
  // 연산 부호 선언
  char op;

  // 10회 반복
  while (i < 10) {
    // 연산 입력 안내
    printf("연산을 입력하시오: ");
    scanf("%d%c%d", &x, &op, &y);

    // 조건문을 사용해 연산 부호 알아내기
    if (op == '+')
      // 함수 호출
      hap(x, y);
    if (op == '-')
      cha(x, y);
    if (op == '*')
      gop(x, y);
    if (op == '/')
      mok(x, y);
    i++;
  }
}

// 더하기 함수
void hap(int a, int b) {
  // 카운트를 셀 정적 지역 변수 count 선언
  static int count;
  count++;
  printf("덧셈은 총 %d번 실행되었습니다\n", count);
  printf("연산의 결과: %d\n", a + b);
}

// 빼기 함수
void cha(int a, int b) {
  static int count;
  count++;
  printf("뺄셈은 총 %d번 실행되었습니다\n", count);
  printf("연산의 결과: %d\n", a - b);
}

// 곱셈 함수
void gop(int a, int b) {
  static int count;
  count++;
  printf("곱셈은 총 %d번 실행되었습니다\n", count);
  printf("연산의 결과: %d\n", a * b);
}

// 나눗셈 함수
void mok(int a, int b) {
  static int count;
  count++;
  printf("나눗셈은 총 %d번 실행되었습니다\n", count);
  printf("연산의 결과: %d\n", a / b);
}