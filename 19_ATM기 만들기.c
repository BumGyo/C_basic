#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 선언해주기
void menu();
void check_money();
void put_money();
void out_money();

// 전역변수로 금액하고 선택 된 매뉴 선언
int money;
int selected_menu;

void main() {
	// 무한루프 만들기
	while (1) {
		menu();
		if (selected_menu == 1)
			check_money();
		else if (selected_menu == 2)
			put_money();
		else if (selected_menu == 3)
			out_money();
		// 4번을 입력하면 break;를 통해 무한루프 빠져나오기
		else if (selected_menu == 4)
			break;
	}

}

void menu() {
	printf("*************Welcome to Express ATM*****************\n");
	printf("(1) 잔고 확인\n");
	printf("(2) 입금\n");
	printf("(3) 출금\n");
	printf("(4) 종료\n");
	printf("하나를 선택하시오: ");
	scanf("%d", &selected_menu);
}

void check_money() {
	printf("잔고는 %d원입니다.\n", money);
}

void put_money() {
	int putted_money;
	printf("입금 금액을 입력하시오 : ");
	scanf("%d", &putted_money);
	money += putted_money;
	printf("잔고는 %d원입니다.\n", money);
}

void out_money() {
	int outted_money;
	printf("출금 금액을 입력하시오 : ");
	scanf("%d", &outted_money);
	money -= outted_money;
	printf("잔고는 %d원입니다.\n", money);
}