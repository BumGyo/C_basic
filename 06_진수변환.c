#include <stdio.h>

int main(void) {
	int data = 0;

	printf("16���� ������ �Է��Ͻÿ� : ");
	scanf_s("%x", &data);

	printf("8�����δ� %#o�Դϴ�\n", data);
	printf("10�����δ� %d�Դϴ�\n", data);
	printf("16�����δ� %#x�Դϴ�\n", data);
}