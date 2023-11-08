#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "screen.h"
#include "key_control.h"

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SELECT 4
#define CANCEL 5

int menu_screen() {
    system("cls");

    print_title();

    int key, x = 34, y = 24;

    gotoxy(x, y);
    printf(">");

    while (1) {
        key = key_control();
        if (y == 24) {              //게임시작 버튼 위치
            if (key == DOWN) {
                gotoxy(x, y);
                printf(" ");
                y = 26;
                gotoxy(x, y);
                printf(">");
            }
            else if (key == SELECT) {   //게임시작 버튼 선택시 3반환
                return 1;
            }
        }
        else if (y == 26) {         //게임설명 버튼 위치
            if (key == UP) {
                gotoxy(x, y);
                printf(" ");
                y = 24;
                gotoxy(x, y);
                printf(">");
            }
            else if (key == DOWN) {
                gotoxy(x, y);
                printf(" ");
                y = 28;
                gotoxy(x, y);
                printf(">");
            }
            else if (key == SELECT) {   //게임메뉴 버튼 선택시 메뉴 화면으로 전환
                print_explanation();
                y = 26;
                gotoxy(x, y);
                printf(">");
                continue;       //메뉴화면 종료시 while문 처음으로 감
            }
        }
        else if (y == 28) {         //게임종료 버튼 위치
            if (key == UP) {
                gotoxy(x, y);
                printf(" ");
                y = 26;
                gotoxy(x, y);
                printf(">");
            }
            else if (key == SELECT) {   //게임종료 버튼 선택시 3반환
                return 3;
            }
        }
    }
}