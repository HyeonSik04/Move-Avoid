#include <stdio.h>
#include "gotoxy.h"
#include "textcolor.h"

void player(int x, int y) {
	textcolor(2);
	gotoxy(x - 2, y - 1);
	printf("┌───┐");
	gotoxy(x - 2, y);
	printf("│   │");
	gotoxy(x - 2, y + 1);
	printf("└───┘");
}