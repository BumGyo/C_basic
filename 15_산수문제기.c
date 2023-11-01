#include <stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리

void main() {
	// 3개의 정수형 변수 선언
	int x, y, num;

	// 일의 자리 수 랜덤 정수를 x, y에 대입
	x = rand() % 10;
	y = rand() % 10;

	// 문제 프린트
	printf("%d + %d 은?\n\n", x, y);
	// 정답 입력받기
	printf("정답 입력 하세요 : ");
	scanf_s("%d", &num);
	printf("\n");

	// 조건문을 사용해 정답여부 판단
	if (x + y == num)
		printf("맞았습니다.");
	else
		printf("틀렸습니다.");
	
}
