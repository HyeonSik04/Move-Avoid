﻿#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"

void print_field() {
	system("cls");

	int x, y;
	x = 19, y = 7;

	gotoxy(x,y++);
	printf("┌───────┬───────┬───────┬───────┬───────┐\n");
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 3; j++) {
			gotoxy(x, y++);
			printf("│       │       │       │       │       │\n");
		}
		gotoxy(x, y++);
		printf("├───────┼───────┼───────┼───────┼───────┤");
	}
	for (int i = 1; i <= 3; i++) {
		gotoxy(x, y++);
		printf("│       │       │       │       │       │\n");
	}
	gotoxy(x, y);
	printf("└───────┴───────┴───────┴───────┴───────┘");
}