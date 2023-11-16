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

		field_array(field);
	}
}

/*

┌───┬───┬───┬───┬───┐
│0,0│0,1│0,2│0,3│0,4│
├───┼───┼───┼───┼───┤
│1,0│1,1│1,2│1,3│1,4│
├───┼───┼───┼───┼───┤
│2,0│2,1│2,2│2,3│2,4│
├───┼───┼───┼───┼───┤
│3,0│3,1│3,2│3,3│3,4│
├───┼───┼───┼───┼───┤
│4,0│4,1│4,2│4,3│4,4│
└───┴───┴───┴───┴───┘

┌───────┬───────┬───────┬───────┬───────┐
│       │       │       │       │       │
│ 23, 9 │ 31, 9 │ 39, 9 │ 47, 9 │ 55, 9 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,13 │ 31,13 │ 39,13 │ 47,13 │ 55,13 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,17 │ 31,17 │ 39,17 │ 47,17 │ 55,17 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,21 │ 31,21 │ 39,21 │ 47,21 │ 55,21 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,25 │ 31,25 │ 39,25 │ 47,25 │ 55,25 │
│       │       │       │       │       │
└───────┴───────┴───────┴───────┴───────┘

*/
