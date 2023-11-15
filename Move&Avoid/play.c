#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "gotoxy.h"
#include "screen.h"
#include "textcolor.h"

int play() {
	int time, x, y;

	print_field();
	printf("\n");

	x = 39, y = 17;
	player(x,y);

	time = 100;

	while (1) {
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			if (y == 9) {
				continue;
			}
			print_empty(x, y);
			y -= 4;
			player(x, y);
			Sleep(time);
		}
		else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			if (y == 25) {
				continue;
			}
			print_empty(x, y);
			y += 4;
			player(x, y);
			Sleep(time);
		}
		else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			if (x == 23) {
				continue;
			}
			print_empty(x, y);
			x -= 8;
			player(x, y);
			Sleep(time);
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			if (x == 55) {
				continue;
			}
			print_empty(x, y);
			x += 8;
			player(x, y);
			Sleep(time);
		}
	}

	return 0;
}

/*
23, 9
31, 9
39, 9
47, 9
55, 9



*/