#include <stdio.h>
#include <stdlib.h> // rand() �Լ� ���� ���̺귯��

void main() {
	// 3���� ������ ���� ����
	int x, y, num;

	// ���� �ڸ� �� ���� ������ x, y�� ����
	x = rand() % 10;
	y = rand() % 10;

	// ���� ����Ʈ
	printf("%d + %d ��?\n\n", x, y);
	// ���� �Է¹ޱ�
	printf("���� �Է� �ϼ��� : ");
	scanf_s("%d", &num);
	printf("\n");

	// ���ǹ��� ����� ���俩�� �Ǵ�
	if (x + y == num)
		printf("�¾ҽ��ϴ�.");
	else
		printf("Ʋ�Ƚ��ϴ�.");
	
}
