#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� �������ֱ�
void menu();
void check_money();
void put_money();
void out_money();

// ���������� �ݾ��ϰ� ���� �� �Ŵ� ����
int money;
int selected_menu;

void main() {
	// ���ѷ��� �����
	while (1) {
		menu();
		if (selected_menu == 1)
			check_money();
		else if (selected_menu == 2)
			put_money();
		else if (selected_menu == 3)
			out_money();
		// 4���� �Է��ϸ� break;�� ���� ���ѷ��� ����������
		else if (selected_menu == 4)
			break;
	}

}

void menu() {
	printf("*************Welcome to Express ATM*****************\n");
	printf("(1) �ܰ� Ȯ��\n");
	printf("(2) �Ա�\n");
	printf("(3) ���\n");
	printf("(4) ����\n");
	printf("�ϳ��� �����Ͻÿ�: ");
	scanf("%d", &selected_menu);
}

void check_money() {
	printf("�ܰ�� %d���Դϴ�.\n", money);
}

void put_money() {
	int putted_money;
	printf("�Ա� �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &putted_money);
	money += putted_money;
	printf("�ܰ�� %d���Դϴ�.\n", money);
}

void out_money() {
	int outted_money;
	printf("��� �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &outted_money);
	money -= outted_money;
	printf("�ܰ�� %d���Դϴ�.\n", money);
}