#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "gotoxy.h"
#include "screen.h"
#include "textcolor.h"

int play() {
	int x, y;

	print_field();
	printf("\n");

	x = 18, y = 7;
	player(x,y);

	while (1) {
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			if (y == 7) {
				continue;
			}
			print_empty();
			y--;
			player(x, y);
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			if (y == 27) {
				continue;
			}
			print_empty();
			y++;
			player(x, y);
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			if (x == 18) {
				continue;
			}
			print_empty();
			x--;
			player(x, y);
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			if (x == 61) {
				continue;
			}
			print_empty();
			x++;
			player(x, y);
		}
		/*
		if (key_control() == UP) {
			if (y == 7) {
				continue;
			}
			gotoxy(x,y);
			printf(" ");
			y--;
			player(x,y);
		}
		else if (key_control() == DOWN) {
			if (y == 27) {
				continue;
			}
			gotoxy(x, y);
			printf(" ");
			y++;
			player(x, y);
		}
		else if (key_control() == LEFT) {
			gotoxy(x, y);
			printf(" ");
			x--;
			player(x, y);
		}
		else if (key_control() == RIGHT) {
			gotoxy(x, y);
			printf(" ");
			x++;
			player(x, y);
		}
		*/
	}
}