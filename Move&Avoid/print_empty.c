#include <stdio.h>
#include "transxy.h"
#include "gotoxy.h"

void print_empty(int x, int y) {
	int t_x = transx(x), t_y = transy(y);

	gotoxy(t_x - 2, t_y - 1);
	printf("     ");
	gotoxy(t_x - 2, t_y);
	printf("     ");
	gotoxy(t_x - 2, t_y + 1);
	printf("     ");
}