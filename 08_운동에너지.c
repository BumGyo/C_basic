#include <stdio.h>

int main(void) {
	double m = 0, v = 0, e = 0;

	printf("질량(kg) : ");
	scanf_s("%lf", &m);
	printf("속도(m/s) : ");
	scanf_s("%lf", &v);

	e = 0.5 * m * v * v;

	printf("운동에너지(J) : %lf", e);

}