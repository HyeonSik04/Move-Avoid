#include <stdio.h>
#include "gotoxy.h"
#include "textcolor.h"

int player(int x, int y) {
	gotoxy(x, y);
	textcolor(2);
	printf("0");
}