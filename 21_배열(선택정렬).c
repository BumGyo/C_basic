#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void main() {
	// ���� ����
	int a, x, y, z, i = 0, j, tmp, least;
	// ����Ʈ �ʱ�ȭ
	int list[SIZE] = { 0 };

	// ���� �ʱ�ȭ
	srand(time(NULL));

	// �迭 ���� �ȳ� ���(�Լ��� ���� �;��µ� �ð��� ������)
	printf("�迭�� ��\n");
	printf("----------------------------------\n");
	for (a = 1; a <= 10; a++)
		printf("%d ", a);
	printf("\n");
	printf("----------------------------------\n");

	// ����Ʈ�� ������ ������ֱ�
	for (x = 0; x < SIZE - 1; x++) {
		list[x] = rand() % 100;
	}
	// ���� �� �迭 ���
	for (y = 0; y < SIZE - 1; y++) {
		printf("%d ", list[y]);
	}

	// ���� �� �迭 ���� �ȳ� ���(�Լ��� ������ ���������ٵ� �ƽ���)
	printf("\n\n�������� �� �迭�� ��\n");
	printf("----------------------------------\n");
	for (a = 1; a <= 10; a++)
		printf("%d ", a);
	printf("\n");
	printf("----------------------------------\n");
	
	// ���������� ���� �ݺ���
	for (i = 0; i < SIZE - 1; i++) {
		// ù��° ���� �۴ٰ� �����ϰ�
		least = i;
		// ���� ���� ��
		for (j = i + 1; j < SIZE - 1; j++)
			// ���� ������ ���� ���� ������ ������
			if (list[j] < list[least])
				// ������ ���� ������ �����ϰ�
				least = j;
		// ���� �ٲ��ش�.
		tmp = list[i];
		list[i] = list[least];
		list[least] = tmp;
	}
	
	// ���ĵ� �迭 ���
	for (z = 0; z < SIZE - 1; z++) {
		printf("%d ", list[z]);
	}
}