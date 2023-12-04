#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main() {
	int ch;
	while ((ch = _getch()) != 'q')
		_putch(ch);
}
