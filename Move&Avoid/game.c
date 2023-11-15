#include <stdio.h>
#include <windows.h>
#include "setting.h"
#include "screen.h"
#include "play.h"

int main() {
	int start;
	setting();
	
	start = menu_screen();

	if (start == 0) {
		system("cls");
		return 0;
	}
	else if (start == 1) {
		play();
		while (1);
	}


	return 0;
}