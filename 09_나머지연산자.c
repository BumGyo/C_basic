#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void) {
	
	int input, minute, second;

	printf("초를 입력하시요: ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;
	
	printf("%d는 %d분 %d초 입니다.", input, minute, second);

	return 0;
}