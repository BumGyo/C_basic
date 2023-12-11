#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu() {
	printf("=================================\n");
	printf("1. 암호화\n");
	printf("2. 복호화\n");
	printf("3. 종료\n");
	printf("=================================\n");
	printf("숫자를 선택하시오 : ");
}

void encrypt(char cipher[], int shift) {
	int i = 0;

	// 문자열이 끝날때까지
	while (cipher[i] != '\0') {
		// a보다 크고 z보다 작으면
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			// 입력 받은 문자 하나를 shift하기
			cipher[i] += shift;
			// z를 넘으면 예외처리
			if (cipher[i] > 'z')
				cipher[i] -= 26;
		}
		// 한자리 앞으로
		i++;
	}
	printf("암호화된 문자열: %s\n", cipher);
}

void decrypt(char cipher[], int shift) {
	int i = 0;
	// 문자열이 끝날때까지
	while (cipher[i] != '\0') {
		// a보다 크고 z보다 작으면
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			// 입력 받은 문자 하나를 shift하기
			cipher[i] -= shift;
			// a를 넘으면 예외처리
			if (cipher[i] < 'a')
				cipher[i] += 26;
		}
		// 한자리 앞으로
		i++;
	}
	printf("복호화된 문자열: %s\n", cipher);
}

void main() {
	char cipher[50];
	int shift = 3;
	int num = 0;

	printf("문자열을 입력하시오 : ");
	gets_s(cipher, 50); // 한줄 전체 입력
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
