#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "player_control.h"
#include "screen.h"
#include "transxy.h"

void move_player(int field[][5], int x, int y) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (field[i][j] == 1) {
				print_player(transx(j), transy(i));
			}
		}
	}

	print_empty(transx(x), transy(y));
}