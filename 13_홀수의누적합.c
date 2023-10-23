#include <stdio.h>

// 1 ~ 10까지 홀수의 누적합을 구해보자

int main(void) {
	// 변수 선언
	int i, hap = 0;

	// 반복문으로 1~10까지... 반복되도록
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 1) {
			hap += i;
		}
		printf("%d까지 홀수의 누적합 출력 : hap = %d\n", i, hap);
	}
}
