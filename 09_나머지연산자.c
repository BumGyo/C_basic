#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void) {
	
	int input, minute, second;

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;
	
	printf("%d�� %d�� %d�� �Դϴ�.", input, minute, second);

	return 0;
}