#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

// �� ���� �迭�� ������ Ȯ���ϴ� �Լ� ����
int array_equal(int a[], int b[], int size) {
	// ���� �ε��� ���� ī��Ʈ �ϴ� ���� ����
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

	// �Լ��� ���� ���� 0�̸� �ٸ� ���
	if (array_equal(&a, &b, SIZE) == 0)
		printf("2���� �迭�� �ٸ�");
	else
		printf("2���� �迭�� ����");

}