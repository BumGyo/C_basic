#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	// 변수들 선언
	int i,j;
	int min, max;
	int num[10] = {0};
	
	// 난수 초기화하기
	srand(time(NULL));
	printf("----------------------------------\n");
	for (i = 1; i <= 10; i++) {
		printf("%d  ", i);
		// 인덱스가 0부터 시작하므로 i-1로 두자리 난수 생성
		num[i - 1] = rand() % 100;
	}
	printf("\n");
	printf("----------------------------------\n");

	max = min = num[0]; // 최대 최소를 임시로 배열의 첫번째 값으로 한다.

	for (j = 0; j < 10; j++) {
		printf("%d ", num[j]);
		// 첫번째 인덱스부터 숫자 비교하여 최대최소 구하기
		if (num[j] > max) max = num[j]; 
		if (num[j] < min) min = num[j];
	}
	printf("\n\n");
	printf("최소값은 %d입니다.\n", max);
	printf("최대값은 %d입니다.\n", min);
}