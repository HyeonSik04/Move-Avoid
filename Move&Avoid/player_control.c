#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "player_control.h"

void player_control(int field[][5]) {
	int speed, x, y, re_x = -1, re_y = -1;

	x = 2, y = 2;
	++field[y][x];

	speed = 120;

	while (1)
	{
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			if (y == 0) {									//위 끝 판정
				continue;
			}
			--field[y][x];

			y--;
			++field[y][x];

			Sleep(speed);
		}
		else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			if (y == 4) {									//아래 끝 판정
				continue;
			}
			--field[y][x];

			y++;
			++field[y][x];

			Sleep(speed);
		}
		else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			if (x == 0) {									//왼쪽 끝 판정
				continue;
			}
			--field[y][x];

			x--;
			++field[y][x];

			Sleep(speed);
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			if (x == 4) {									//오른쪾 끝 판정
				continue;
			}
			--field[y][x];

			x++;
			++field[y][x];

			Sleep(speed);
		}
		
		if (re_x == x && re_y == y) {
			continue;
		}
		re_x = x, re_y = y;
		move_player(field, x, y);
	}
}