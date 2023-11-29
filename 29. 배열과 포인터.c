#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define R 3

void main() {
	int a[R] = { 88, 99, 87 };
	int* p, cnt, hap = 0;
	p = a;

	for (cnt = 0; cnt < R; cnt++) {
		// p 주소에 있는 값을 hap에 더하고 다음 주소로
		hap += *p++;
		printf("%d번째의 배열 요소 : %d", cnt + 1, a[cnt]);
		printf(" > 포인터 주소 : %d\n", p);
	}
	printf("\n%d개의 배열 요소 합계 : %d\n", cnt, hap);
}
