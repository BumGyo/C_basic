#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu() {
	printf("=================================\n");
	printf("1. ��ȣȭ\n");
	printf("2. ��ȣȭ\n");
	printf("3. ����\n");
	printf("=================================\n");
	printf("���ڸ� �����Ͻÿ� : ");
}

void encrypt(char cipher[], int shift) {
	int i = 0;

	// ���ڿ��� ����������
	while (cipher[i] != '\0') {
		// a���� ũ�� z���� ������
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			// �Է� ���� ���� �ϳ��� shift�ϱ�
			cipher[i] += shift;
			// z�� ������ ����ó��
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
		// ���ڸ� ������
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s\n", cipher);
}

void decrypt(char cipher[], int shift) {
	int i = 0;
	// ���ڿ��� ����������
	while (cipher[i] != '\0') {
		// a���� ũ�� z���� ������
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			// �Է� ���� ���� �ϳ��� shift�ϱ�
			cipher[i] -= shift;
			// a�� ������ ����ó��
			if (cipher[i] < 'a')
				cipher[i] += 26;
		}
		// ���ڸ� ������
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s\n", cipher);
}

void main() {
	char cipher[50];
	int shift = 3;
	int num = 0;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(cipher, 50); // ���� ��ü �Է�
	while (1) {
		menu();
		scanf("%d", &num);
		if (num == 1)
			encrypt(cipher, shift);
		else if (num == 2)
			decrypt(cipher, shift);
		else
			break;
	}
}
