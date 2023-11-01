#include <stdio.h>

// 2개의 매개변수를 받아 정수값을 리턴하는 max 함수 정의
int max(int x, int y) {
	// x가 y보다 크면
	if (x > y)
		return x;
	// y가 x보다 크면
	else if (x < y)
		return y;
	// 둘이 같으면(같으면 0 반환)
	else
		return 0;
}

int main(void) {
	// 입력 받을 두 개의 변수 선언
	int x, y;

	// 입력 안내 문구 작성
	printf("정수 2개를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	// 함수를 호출하여 출력
	printf("더 큰 값은 %d 입니다", max(x, y));

	return 0;
}
