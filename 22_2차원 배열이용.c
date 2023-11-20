#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	// 2차원 배열 사용
	int score[3][4] = { 0 };
	int i, j, x, tot = 0;
	
	// 네 과목 입력 받기
	for (i = 0; i <= 2; i++) {
		printf("네 과목의 점수 입력 : ");
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}

	// 이중 for문을 이용하여 총 점수 값 구하기
	for (j = 0; j <= 2; j++) {
		for (x = 0; x < 4; x++) {
			tot += score[j][x];
		}
		// 형 변환을 통해 평균 소수점 자리 표시하기
		printf("총점 : %d, 평균 : %0.2f\n", tot, (float)(tot / 4.0));
		// 한명의 총 점수를 출력 마쳤으므로 초기화해주기
		tot = 0;
	}
}