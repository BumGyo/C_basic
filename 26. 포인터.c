#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int i = 10;
	double f = 12.3;

	int *pi = NULL;		// ����ִ� �ּ� �ƹ��͵� �������� �ʰڴ�.
	double *pf = NULL;  // ������ ���� ���� �� �� �ּ�

	pi = &i;	// i ������ �ּҸ� ����
	pf = &f;	// f ������ �ּҸ� ����..

	printf("%p %p\n", pi, &i);
	printf("%p %p\n", pf, &f);
	printf("%d %lf\n", *pi, *pf);	// ���� ���� ������ * ����غ���
}
