#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int i = 10;
	int* pi = &i;
	printf("i = %d, pi = %p\n", i, pi);

	// pi�� ����Ű�� ��ġ�� ���� ����
	(*pi)++;
	printf("i = %d, pi = %p\n", i, pi);

	// pi�� ����Ű�� ��ġ�� ���� ���� �����µڿ� �ּ� ���� ����
	*pi++;
	printf("i = %d, pi = %p\n", i, pi);
}
