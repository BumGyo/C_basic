#include <stdio.h>

int main(void) {
	int num = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�.");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.");
}