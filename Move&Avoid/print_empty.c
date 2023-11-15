#include <stdio.h>
#include "gotoxy.h"

void print_empty() {
	int x, y;
	x = 18, y = 7;
	for (int i = 1; i <= 21; i++) {
		gotoxy(x, y);
		y++;
		for (int j = 1; j < 45; j++) {
			printf(" ");
		}
		printf("\n");
	}
}