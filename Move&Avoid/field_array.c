#include <Stdio.h>
#include "gotoxy.h"

void field_array(int field[][5]) {
	gotoxy(0, 0);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", field[i][j]);
		}
		printf("\n");
	}
}