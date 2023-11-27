#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int i = 10;
	double f = 12.3;

	int *pi = NULL;		// 비어있는 주소 아무것도 참조하지 않겠다.
	double *pf = NULL;  // 포인터 변수 만든 후 빈 주소

	pi = &i;	// i 변수의 주소를 대입
	pf = &f;	// f 변수의 주소를 대입..

	printf("%p %p\n", pi, &i);
	printf("%p %p\n", pf, &f);
	printf("%d %lf\n", *pi, *pf);	// 간접 참조 연산자 * 사용해보기
}
