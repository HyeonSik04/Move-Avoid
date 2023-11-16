#include <stdio.h>
#include <windows.h>
#include "screen.h"
#include "gotoxy.h"
#include "player_control.h"

void player_control(int field[][5]) {
	int speed, x, y;

	x = 2, y = 2;
	++field[y][x];
	move_player(field, x, y);

	speed = 130;

	while (1)
	{
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			if (y == 0) {									//위 끝 판정
				continue;
			}
			--field[y][x];
			print_empty(x, y);

			y--;
			++field[y][x];
			move_player(field, x, y);
			Sleep(speed);
		}
		else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			if (y == 4) {									//아래 끝 판정
				continue;
			}
			--field[y][x];
			print_empty(x, y);

			y++;
			++field[y][x];
			move_player(field, x, y);

			Sleep(speed);
		}
		else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			if (x == 0) {									//왼쪽 끝 판정
				continue;
			}
			--field[y][x];
			print_empty(x, y);

			x--;
			++field[y][x];
			move_player(field, x, y);

			Sleep(speed);
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			if (x == 4) {									//오른쪾 끝 판정
				continue;
			}
			--field[y][x];
			print_empty(x,y);

			x++;
			++field[y][x];
			move_player(field, x, y);

			Sleep(speed);
		}
	}
}