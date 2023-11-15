#include <stdio.h>
#include <windows.h>
#include "screen.h"
#include "gotoxy.h"

int print_explanation() {
	system("cls");

		gotoxy(36, 4);
		printf("게임 설명");
		int x = 6;
		int y = 10;
		gotoxy(x, y);
		printf("대충 패턴 보고 피해라");
		gotoxy(x, y += 2);
		printf("이게 어렵냐? ㅋ");

		while (1) {
		if (GetAsyncKeyState(VK_BACK) & 0x8000) {	//BackSpace 누를 시 돌아감
			return 0;
		}
	}
}