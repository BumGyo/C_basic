#include <stdio.h>

int main(void) {
	double m = 0, v = 0, e = 0;

	printf("����(kg) : ");
	scanf_s("%lf", &m);
	printf("�ӵ�(m/s) : ");
	scanf_s("%lf", &v);

	e = 0.5 * m * v * v;

	printf("�������(J) : %lf", e);

}