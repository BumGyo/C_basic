#include <stdio.h>

int main(void) {

	// 변수 선언
	int dan;
	int i = 1;

	// 문자 하나 입력 받기
	printf("2~9 사이의 정수를 입력 : ");
	scanf_s("%d", &dan);

	if (dan >= 2 && dan <= 9) {
		while (i <= 9) {
			printf("%d * %d = %d\n", dan, i, dan * i);
			i++;
		}
	}
	else {
		printf("2~9사이의 정수만 입력 바랍니다.");
	}
}
