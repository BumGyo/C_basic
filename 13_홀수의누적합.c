#include <stdio.h>

// 1 ~ 10���� Ȧ���� �������� ���غ���

int main(void) {
	// ���� ����
	int i, hap = 0;

	// �ݺ������� 1~10����... �ݺ��ǵ���
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 1) {
			hap += i;
		}
		printf("%d���� Ȧ���� ������ ��� : hap = %d\n", i, hap);
	}
}
