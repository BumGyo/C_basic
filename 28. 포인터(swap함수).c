#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* px, int* py) {
	int tmp;

	// a�� ���� ��� temp ������ ����
	tmp = *px;
	// a�� ���� b�� ������ �ٲٱ�
	*px = *py;
	// temp�� ��Ƶ� a�� ���� b�� ���� ����
	*py = tmp;

}

void main() {
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d b = %d\n", a, b);
}
