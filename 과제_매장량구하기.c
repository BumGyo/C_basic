#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int max_oil = 0;
  // 난수 재정비
  srand(time(NULL));

  // 매장 필드 만들기
  int oil_field[6][6];
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      // 각 인덱스에 0~9 난수 만들기
      oil_field[i][j] = rand() % 10;
    }
  }

  // 난수로 만든 필드 출력하기
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 6; j++){
      printf("%d ", oil_field[i][j]);
    }
    // 한줄 찍으면 줄바꿈해주기
    printf("\n");
  }
  // 최고 매장량 찍기 전에 줄바꿈해주기
  printf("\n");

  // 3x3으로 찾을 것이기 때문에 행과 열 0~4까지 반복
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      // 3x3의 합을 current_oil 변수에 저장
      int current_oil = oil_field[i][j] + oil_field[i][j+1]+ oil_field[i][j+2] +
                        oil_field[i+1][j] + oil_field[i+1][j+1] + oil_field[i+1][j+2] +
                        oil_field[i+2][j] + oil_field[i+2][j+1] + oil_field[i+2][j+2];
      // 만약 current_oil이 max_oil보다 크다면 max_oil에 current_oil 값 넣기
      max_oil = (current_oil > max_oil) ? current_oil : max_oil;
    }
  }
  printf("가장 매장량이 많은 구역의 매장량은 %d입니다.", max_oil);
}
