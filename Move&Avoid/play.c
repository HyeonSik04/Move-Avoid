#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include "screen.h"
#include "pattern.h"
#include "player_control.h"

int play() {
	int field[5][5] = { 0 };

	print_field();

	player_control(field);

	return 0;
}