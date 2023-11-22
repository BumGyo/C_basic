#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

// 두 개의 배열이 같은지 확인하는 함수 선언
int array_equal(int a[], int b[], int size) {
	// 같은 인덱스 수를 카운트 하는 변수 선언
	int count = 0;
	for (int i = 0; i < SIZE; i++) {
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}

void main() {
	int a[SIZE] = { 1, 2, 3, };
	int b[SIZE] = { 0, };

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int j = 0; j < SIZE; j++) {
		printf("%d ", b[j]);
	}
	printf("\n");

	// 함수의 리턴 값이 0이면 다름 출력
	if (array_equal(&a, &b, SIZE) == 0)
		printf("2개의 배열은 다름");
	else
		printf("2개의 배열은 같음");

}