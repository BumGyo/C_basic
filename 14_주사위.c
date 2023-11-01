#include <stdio.h>

void main() {
	// 3개의 정수형 변수 선언
	int x, y, z;

	// 첫번째 주사위 숫자 x 1~6까지 반복
	for (x = 1; x <= 6; x++) {
		// 두번째 주사위 숫자 y 1~6까지 반복
		for (y = 1; y <= 6; y++) {
			// 세번째 주사위 숫자 z 1~6까지 반복
			for (z = 1; z <= 6; z++) {
				// 만약 모든 주사위의 합이 10일 경우
				if (x + y +z == 10)
					printf("(%d,%d,%d)  ", x, y, z);
			}
		}
		printf("\n");
	}
}
