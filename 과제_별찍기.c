#include <stdio.h>

// 2개의 매개변수를 받아 정수값을 리턴하는 max 함수 정의
int max(int x, int y) {
  // x가 y보다 크면
  if (x > y)
    return x;
  // y가 x보다 크면
  else if (x < y)
    return y;
  // 둘이 같으면(같으면 0 반환)
  else
    return 0;
}

// 2개의 매개변수를 받아 별을 찍는 함수 hosi 정의
int hosi(int x, int y) {
  int i, j;

  printf("첫번재 정수: %d\t", x);
  for (i = 1; i <= x; i++)
    printf("*");
  printf("\n");

  printf("두번재 정수: %d\t", y);
  for (j = 1; j <= y; j++)
    printf("*");
  printf("\n");
}

int main(void) {
  // 입력 받을 두 개의 변수 선언
  int x, y;

  // 입력 안내 문구 작성
  printf("정수 2개 입력 : ");
  scanf("%d %d", &x, &y);
  printf("\n");

  // 별 찍기 함수 호출
  hosi(x, y);
  printf("\n");

  // 함수를 호출하여 더 큰 값이 뭔지 알아내기
  if (max(x, y) == x)
    printf("더 큰 값은 첫번째 입력 %d 입니다", x);
  else if (max(x, y) == y)
    printf("더 큰 값은 두번째 입력 %d 입니다", y);

  return 0;
}
