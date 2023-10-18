#include <stdio.h>

int main(void) {

	// 변수 선언
	int x = 1, y = 1, z = 1;
	
	// 이중 while문을 이용해 달력 출력
	while (x <= 6) {
		while (z <= 5) {
			// %2d를 이용해 배열 맞추기
			printf("%2d ", y);
			z++;
			y++;
		}
		z = 1;
		printf("\n");
		x++;
	}
}
