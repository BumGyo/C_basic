#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	// 2���� �迭 ���
	int score[3][4] = { 0 };
	int i, j, x, tot = 0;
	
	// �� ���� �Է� �ޱ�
	for (i = 0; i <= 2; i++) {
		printf("�� ������ ���� �Է� : ");
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}

	// ���� for���� �̿��Ͽ� �� ���� �� ���ϱ�
	for (j = 0; j <= 2; j++) {
		for (x = 0; x < 4; x++) {
			tot += score[j][x];
		}
		// �� ��ȯ�� ���� ��� �Ҽ��� �ڸ� ǥ���ϱ�
		printf("���� : %d, ��� : %0.2f\n", tot, (float)(tot / 4.0));
		// �Ѹ��� �� ������ ��� �������Ƿ� �ʱ�ȭ���ֱ�
		tot = 0;
	}
}