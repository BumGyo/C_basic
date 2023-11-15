#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void main() {
	// 변수 선언
	int a, x, y, z, i = 0, j, tmp, least;
	// 리스트 초기화
	int list[SIZE] = { 0 };

	// 난수 초기화
	srand(time(NULL));

	// 배열 순서 안내 출력(함수로 빼고 싶었는데 시간이 없었음)
	printf("배열의 값\n");
	printf("----------------------------------\n");
	for (a = 1; a <= 10; a++)
		printf("%d ", a);
	printf("\n");
	printf("----------------------------------\n");

	// 리스트를 난수로 만들어주기
	for (x = 0; x < SIZE - 1; x++) {
		list[x] = rand() % 100;
	}
	// 정렬 전 배열 출력
	for (y = 0; y < SIZE - 1; y++) {
		printf("%d ", list[y]);
	}

	// 정렬 후 배열 순서 안내 출력(함수로 뺐으면 간단했을텐데 아쉬움)
	printf("\n\n선택정렬 후 배열의 값\n");
	printf("----------------------------------\n");
	for (a = 1; a <= 10; a++)
		printf("%d ", a);
	printf("\n");
	printf("----------------------------------\n");
	
	// 선택정렬을 위한 반복문
	for (i = 0; i < SIZE - 1; i++) {
		// 첫번째 값이 작다고 가정하고
		least = i;
		// 다음 수와 비교
		for (j = i + 1; j < SIZE - 1; j++)
			// 만약 왼쪽의 값이 다음 값보다 작으면
			if (list[j] < list[least])
				// 다음을 작은 값으로 정의하고
				least = j;
		// 둘이 바꿔준다.
		tmp = list[i];
		list[i] = list[least];
		list[least] = tmp;
	}
	
	// 정렬된 배열 출력
	for (z = 0; z < SIZE - 1; z++) {
		printf("%d ", list[z]);
	}
}