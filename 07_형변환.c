#include <stdio.h>

int main(void) {
	int a;

	printf("아스키 코드값을 입력하시오 : ");
	scanf_s("%d", &a);

	printf("문자 : %c입니다.", (char)a);
}