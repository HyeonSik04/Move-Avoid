#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "textcolor.h"

void pattern(int field[][5]) {

	Sleep(1000);

	for (int i = 0; i <= 4; i ++) {
		++field[0][i];
	}
}

/*








*/