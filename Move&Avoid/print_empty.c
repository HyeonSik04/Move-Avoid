#include <stdio.h>
#include "gotoxy.h"

void print_empty(int x, int y) {
	gotoxy(x - 2, y - 1);
	printf("     ");
	gotoxy(x - 2, y);
	printf("     ");
	gotoxy(x - 2, y + 1);
	printf("     ");
}