#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "gotoxy.h"
#include "screen.h"
#include "pattern.h"
#include "player_control.h"
#include "transxy.h"

int play() {
	int field[5][5] = { 0 };

	print_field();

	player_control(field);

	/*
	while (1) {
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			if (y == 9) {									//위쪽 끝 판정
				continue;
			}
			--field[x_field][y_field];
			print_empty(x, y);

			--y_field;
			y -= 4;

			++field[x_field][y_field];
			player(x, y);

			Sleep(time);
		}
		else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			if (y == 25) {									//아래쪽 끝 판정
				continue;
			}
			--field[x_field][y_field];
			print_empty(x, y);
			
			++y_field;
			y += 4;

			++field[x_field][y_field];
			player(x, y);

			Sleep(time);
		}
		else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			if (x == 23) {									//왼쪽 끝 판정
				continue;
			}
			--field[x_field][y_field];
			print_empty(x, y);

			--x_field;
			x -= 8;

			++field[x_field][y_field];
			player(x, y);

			Sleep(time);
		}
		else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			if (x == 55) {									//오른쪽 끝 판정
				continue;
			}
			--field[x_field][y_field];
			print_empty(x, y);

			++x_field;
			x += 8;

			++field[x_field][y_field];
			player(x, y);

			Sleep(time);
		}
		gotoxy(0,34);

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (field[i][j] == 1) {
					printf("%d, %d", i, j);
				}
			}
		}

		gotoxy(50, 34);
		printf("%2d, %2d", x, y);


		for (int i = 0; i < 5; i++) {	//배열에 2가 있으면 게임 종료
			for (int j = 0; j < 5; j++) {
				if (field[i][j] == 2) {
					return gameover();
				}
			}
		}
	}*/

	return 0;
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

*/