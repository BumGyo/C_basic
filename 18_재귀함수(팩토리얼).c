#include <stdio.h>

long factorial(long n) {
	printf("factorial(%d)\n", n);

	if (n <= 1)	return 1;
	else return n * factorial(n - 1);
}

int main(void) {
	long n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("%d!�� %d�Դϴ�.\n", n, factorial(n));
}
