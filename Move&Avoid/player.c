#include <stdio.h>
#include "gotoxy.h"
#include "textcolor.h"

void player() {
	int x, y;
	x = 28, y = 20;

	gotoxy(x, y);
	textcolor(2);
	printf("  ");
}