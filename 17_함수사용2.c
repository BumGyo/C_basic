#include <stdio.h>

// 정수를 입력받는 함수
int get_integer() {

	// 입력 안내 문구 작성
	int a;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);

	return a;

}

int main(void) {
	// 값을 넘겨받을 두 개의 변수 선언
	int x, y;

	// 함수를 호출하여 리턴값을 변수에 대입
	x = get_integer();
	y = get_integer();
	
	// 두수의 합 출력
	printf("두수의 합은 %d입니다", x+y);

	return 0;
}
