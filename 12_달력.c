#include <stdio.h>

int main(void) {

	// ���� ����
	int x = 1, y = 1, z = 1;
	
	// ���� while���� �̿��� �޷� ���
	while (x <= 6) {
		while (z <= 5) {
			// %2d�� �̿��� �迭 ���߱�
			printf("%2d ", y);
			z++;
			y++;
		}
		z = 1;
		printf("\n");
		x++;
	}
}
