#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "textcolor.h"

int gameover() {
    system("cls");

	int x, y;
	x = 4, y = 7;

	gotoxy(x, y++);
	printf(" d888b   .d8b.  .88b  d88. d88888b     .d88b.  db    db d88888b d8888b.");
	gotoxy(x, y++);
	printf("88' Y8b d8' `8b 88'YbdP`88 88'        .8P  Y8. 88    88 88'     88  `8D");
	gotoxy(x, y++);
	printf("88      88ooo88 88  88  88 88oooo     88    88 Y8    8P 88ooooo 88oobY'");
	gotoxy(x, y++);
	printf("88  ooo 88~~~88 88  88  88 88~~~~~    88    88 `8b  d8' 88~~~~~ 88`8b");
	gotoxy(x, y++);
	printf("88. ~8~ 88   88 88  88  88 88.        `8b  d8'  `8bd8'  88.     88 `88.");
	gotoxy(x, y++);
	printf(" Y888P  YP   YP YP  YP  YP Y88888P     `Y88P'     YP    Y88888P 88   YD");

    x = 24, y = 25;
    gotoxy(x, y);
    printf("다시하기");
    gotoxy(x + 24, y);
    printf("메인메뉴");

    x = 22, y = 25;
    gotoxy(x, y);
    printf(">");

    while (1) {
        if (x == 22) {
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
                gotoxy(x, y);
                printf(" ");
                x = 46;
                gotoxy(x, y);
                printf(">");
            }
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //다시하기 선택시 1반환
                return 1;
            }
        }
        else if (x == 46) {
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
                gotoxy(x, y);
                printf(" ");
                x = 22;
                gotoxy(x, y);
                printf(">");
            }
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //메인메뉴 선택시 2반환
                Sleep(150);
                return 2;
            }
        }
    }
}

/*


 d888b   .d8b.  .88b  d88. d88888b     .d88b.  db    db d88888b d8888b.
88' Y8b d8' `8b 88'YbdP`88 88'        .8P  Y8. 88    88 88'     88  `8D
88      88ooo88 88  88  88 88ooooo    88    88 Y8    8P 88ooooo 88oobY'
88  ooo 88~~~88 88  88  88 88~~~~~    88    88 `8b  d8' 88~~~~~ 88`8b
88. ~8~ 88   88 88  88  88 88.        `8b  d8'  `8bd8'  88.     88 `88.
 Y888P  YP   YP YP  YP  YP Y88888P     `Y88P'     YP    Y88888P 88   YD


*/