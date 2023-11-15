#include <stdio.h>
#include <windows.h>
#include "setting.h"
#include "screen.h"

int main() {
	setting();

	if (menu_screen() == 0) {
		system("cls");
		return 0;
	}

	return 0;
}