#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char src[] = "Action speaks";
	char dst[100];

	int i;
	printf("���� ���ڿ�=%s\n", src);
	for (i = 0; src[i] != '\0'; i++)
		dst[i] = src[i];
	//dst[i] = '\0';
	printf("����� ���ڿ�=%s\n", dst);

}
