#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	// ������ ����
	int i,j;
	int min, max;
	int num[10] = {0};
	
	// ���� �ʱ�ȭ�ϱ�
	srand(time(NULL));
	printf("----------------------------------\n");
	for (i = 1; i <= 10; i++) {
		printf("%d  ", i);
		// �ε����� 0���� �����ϹǷ� i-1�� ���ڸ� ���� ����
		num[i - 1] = rand() % 100;
	}
	printf("\n");
	printf("----------------------------------\n");

	max = min = num[0]; // �ִ� �ּҸ� �ӽ÷� �迭�� ù��° ������ �Ѵ�.

	for (j = 0; j < 10; j++) {
		printf("%d ", num[j]);
		// ù��° �ε������� ���� ���Ͽ� �ִ��ּ� ���ϱ�
		if (num[j] > max) max = num[j]; 
		if (num[j] < min) min = num[j];
	}
	printf("\n\n");
	printf("�ּҰ��� %d�Դϴ�.\n", max);
	printf("�ִ밪�� %d�Դϴ�.\n", min);
}