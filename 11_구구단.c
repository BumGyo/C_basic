#include <stdio.h>

int main(void) {

	// ���� ����
	int dan;
	int i = 1;

	// �������� �� �Է� �ޱ�
	printf("2~9 ������ ������ �Է� : ");
	scanf_s("%d", &dan);

	// ���ǹ��� Ȱ���� ���� ���� Ȯ�����ֱ�
	if (dan >= 2 && dan <= 9) {
		// while���� ���� ������ ����
		while (i <= 9) {
			printf("%d * %d = %d\n", dan, i, dan * i);
			i++;
		}
	}
	else {
		printf("2~9������ ������ �Է� �ٶ��ϴ�.");
	}
}
