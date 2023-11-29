#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int i = 10;
	int* pi = &i;
	printf("i = %d, pi = %p\n", i, pi);

	// pi가 가리키는 위치의 값을 증가
	(*pi)++;
	printf("i = %d, pi = %p\n", i, pi);

	// pi가 가리키는 위치의 값을 먼저 가져온뒤에 주소 값을 증가
	*pi++;
	printf("i = %d, pi = %p\n", i, pi);
}
