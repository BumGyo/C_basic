#include <stdio.h>

// 2���� �Ű������� �޾� �������� �����ϴ� max �Լ� ����
int max(int x, int y) {
	// x�� y���� ũ��
	if (x > y)
		return x;
	// y�� x���� ũ��
	else if (x < y)
		return y;
	// ���� ������(������ 0 ��ȯ)
	else
		return 0;
}

int main(void) {
	// �Է� ���� �� ���� ���� ����
	int x, y;

	// �Է� �ȳ� ���� �ۼ�
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	// �Լ��� ȣ���Ͽ� ���
	printf("�� ū ���� %d �Դϴ�", max(x, y));

	return 0;
}
