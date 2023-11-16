#include <stdio.h>
#include <windows.h>
#include "player_control.h"
#include "transxy.h"
#include "screen.h"
#include "textcolor.h"

void pattern(int field[][5]) {
	for (int i = 0; i < 5; i++) {
		field_array(field);
		for (int j = 0; j < 5; i++) {
			++field[i][j];
		}
		Sleep(500);
		for (int j = 0; j < 5; i++) {
			--field[i][j];
		}
		Sleep(250);

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

*/