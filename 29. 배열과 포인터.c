#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define R 3

void main() {
	int a[R] = { 88, 99, 87 };
	int* p, cnt, hap = 0;
	p = a;

	for (cnt = 0; cnt < R; cnt++) {
		// p �ּҿ� �ִ� ���� hap�� ���ϰ� ���� �ּҷ�
		hap += *p++;
		printf("%d��°�� �迭 ��� : %d", cnt + 1, a[cnt]);
		printf(" > ������ �ּ� : %d\n", p);
	}
	printf("\n%d���� �迭 ��� �հ� : %d\n", cnt, hap);
}
