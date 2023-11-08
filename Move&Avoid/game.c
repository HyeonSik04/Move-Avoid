#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "setting.h"
#include "screen.h"

int main() {
	int start;
	setting();

	start = menu_screen();

	if (start == 1) {

	}
	else if (start == 2) {

	}
	else if (start == 3) {
		system("cls");
		return 0;
	}

	return 0;
}