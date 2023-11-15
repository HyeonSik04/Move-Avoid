#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"
#include "screen.h"
#include "play.h"

int menu_screen() {
    print_title();

    int time, over_num, x = 34, y = 24;

    gotoxy(x, y);
    printf(">");

    time = 120;

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
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //게임시작 선택시 play 함수 호출
                Sleep(time);
                
                while (1) {
                    over_num = play();

                    if (over_num == 1) {      //다시하기 선택시 
                        system("cls");
                        Sleep(2000);
                        continue;
                    }
                    else if (over_num == 2) {       //메인메뉴 선택시
                        break;
                    }
                }
                print_title();
                gotoxy(x, y);
                printf(">");
                continue;
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
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //게임설명 선택시 게임설명 화면으로 전환
                print_explanation();
                print_title();
                y = 26;
                gotoxy(x, y);
                printf(">");
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
            else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {   //게임종료 선택시 break
                Sleep(time);
                break;
            }
        }
    }
    
    return 0;
}