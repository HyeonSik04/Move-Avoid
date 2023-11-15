#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "screen.h"

int menu_screen() {
    system("cls");

    print_title();

    int time, x = 34, y = 24;

    gotoxy(x, y);
    printf(">");

    time = 100;

    while (1) {
        if (y == 24) {              //게임시작 버튼 위치
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
                gotoxy(x, y);
                printf(" ");
                y = 26;
                gotoxy(x, y);
                printf(">");
                Sleep(time);
            }
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //게임시작 버튼 선택시 1반환
                Sleep(time);
                return 1;
            }
        }
        else if (y == 26) {         //게임설명 버튼 위치
            if (GetAsyncKeyState(VK_UP) & 0x8000) {
                gotoxy(x, y);
                printf(" ");
                y = 24;
                gotoxy(x, y);
                printf(">");
                Sleep(time);
            }
            else if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
                gotoxy(x, y);
                printf(" ");
                y = 28;
                gotoxy(x, y);
                printf(">");
                Sleep(time);
            }
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //게임메뉴 버튼 선택시 메뉴 화면으로 전환
                print_explanation();
                y = 26;
                gotoxy(x, y);
                printf(">");
                Sleep(time);
                continue;       //메뉴화면 종료시 while문 처음으로 감
            }
        }
        else if (y == 28) {         //게임종료 버튼 위치
            if (GetAsyncKeyState(VK_UP) & 0x8000) {
                gotoxy(x, y);
                printf(" ");
                y = 26;
                gotoxy(x, y);
                printf(">");
                Sleep(time);
            }
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //게임종료 버튼 선택시 0반환
                Sleep(time);
                return 0;
            }
        }
    }
}