#include <stdio.h>

// 점수 배열을 매개변수로 받는 평균을 구하는 함수
float get_average(float score[], int num) {
  float total = 0.0;
  for (int i = 0; i < num; i++) {
    total += score[i];
  }
  return total / num;
}

void get_freq(float score[], int freq[10], int n) {
  int i, range;
  for (i = 0; i < n; i++) {
    range = score[i] / 10;
    freq[range]++;
  }
}

void main() {
  float score[3] = {10.0, 20.0, 30.0};
  int freq[10] = {0};
  float average;
  int i;

  printf("3명의 성적을 입력하시오: ");
  scanf("%f %f %f", &score[0], &score[1], &score[2]);

  printf("%f", get_average(score, 3));
  get_freq(score, freq, 3);
  printf("\n");
  for(i = 0; i < 10; i++) {
    printf("%d ~ %d %d명\n", i * 10, (i+1) * 10, freq[i]);
  }
}
