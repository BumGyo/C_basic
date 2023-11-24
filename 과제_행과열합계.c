#include <stdio.h>

void main() {
  // 행과 열 합의 변수 선언
  int i, j, sum_x = 0, sum_y = 0;
  // 2차원 배열 정의
  int numArr[3][5] = 
  {{12, 56, 32, 16, 98},
  {99, 56, 34, 41, 3},
  {65, 3, 87, 78, 21}};

  // 2중 for문을 이용해 행 합계 구하기
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 5; j++){
      sum_x += numArr[i][j];
    }
    printf("%d행의 합계 : %d\n", (i+1), sum_x);
    // 한 행의 합계를 출력하면 0으로 초기화해주기
    sum_x = 0;
  }

  // 2중 for문을 이용해 열 합계 구하기
  for(j = 0; j < 5; j++) {
    for(i = 0; i < 3; i++){
      sum_y += numArr[i][j];
    }
    printf("%d열의 합계 : %d\n", (j+1), sum_y);
    // 한 열의 합계를 출력하면 0으로 초기화해주기
    sum_y = 0;
  }
}
