#include <stdio.h>

// ������ �Է¹޴� �Լ�
int get_integer() {

	// �Է� �ȳ� ���� �ۼ�
	int a;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &a);

	return a;

}

int main(void) {
	// ���� �Ѱܹ��� �� ���� ���� ����
	int x, y;

	// �Լ��� ȣ���Ͽ� ���ϰ��� ������ ����
	x = get_integer();
	y = get_integer();
	
	// �μ��� �� ���
	printf("�μ��� ���� %d�Դϴ�", x+y);

	return 0;
}
