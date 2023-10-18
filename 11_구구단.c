#include <stdio.h>

int main(void) {

	// 변수 선언
	int dan;
	int i = 1;

	// 구구단의 단 입력 받기
	printf("2~9 사이의 정수를 입력 : ");
	scanf_s("%d", &dan);

	// 조건문을 활용해 단의 범위 확인해주기
	if (dan >= 2 && dan <= 9) {
		// while문을 통해 구구단 생성
		while (i <= 9) {
			printf("%d * %d = %d\n", dan, i, dan * i);
			i++;
		}
	}
	else {
		printf("2~9사이의 정수만 입력 바랍니다.");
	}
}
