#include <stdio.h>

int main(void) {
	int num = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("입력된 정수는 짝수입니다.");
	else
		printf("입력된 정수는 홀수입니다.");
}