#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* px, int* py) {
	int tmp;

	// a의 값을 잠시 temp 변수에 놓기
	tmp = *px;
	// a의 값을 b의 값으로 바꾸기
	*px = *py;
	// temp에 담아둔 a의 값을 b의 값에 놓기
	*py = tmp;

}

void main() {
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d b = %d\n", a, b);
}
