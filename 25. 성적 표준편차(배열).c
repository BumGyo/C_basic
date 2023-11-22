#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 10

// 평균 변수를 전역변수로 선언
double average = 0;

// 평균을 구하는 함수 선언
double get_average(int score[]) {
    // 총 점수를 저장하는 변수 선언
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += score[i];
    }
    // 전역변수인 평균의 값을 바꿔주고
    average = sum / SIZE;
    // 리턴해준다.
    return average;
}

// 표준편차를 구하는 함수 선언
double get_stdev(int score[]) {
    // 분산을 저장하는 변수 선언
    double var = 0;
    // 각 인덱스인 점수를 평균으로 나눈 후 제곱
    for (int i = 0; i < SIZE; i++) {
        var += ((score[i] - average) * (score[i] - average));
    }
    // 그 전체 합을 인덱스 수로 나누기
    var = var / SIZE;
    // 루트를 씌우면 표준편차가 되므로 그 값 리턴
    return sqrt(var);
}

int main() {
    int score[SIZE] = { 0, };

    // 점수 입력 받기
    for (int i = 0; i < SIZE; i++) {
        printf("%d번째 데이터를 입력하시오 : ", i + 1);
        scanf("%d", &score[i]);
    }

    printf("평균값은 %lf\n", get_average(score));
    printf("표준편차값은 %lf\n", get_stdev(score));

    return 0;
}
