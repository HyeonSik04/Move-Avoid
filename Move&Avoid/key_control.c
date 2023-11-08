#include <stdio.h>
#include <conio.h>

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SELECT 4
#define CANCEL 5

int key_control() {
	char input;
    while (1) {
        if (_kbhit()) {
            input = _getch();
            if (input == -32) {
                input = _getch();
                 if (input == 72) {     //↑ 키 누르면 0 반환
                    return UP;
                }
                else if (input == 80) {     //↓ 키 누르면 1 반환
                    return DOWN;
                }
                else if (input == 75) {     //← 누르면 2 반환
                    return LEFT;
                }
                else if (input == 77) {     //→ 키 누르면 3 반환
                    return RIGHT;
                }
            }
            else if (input == 'Z' || input == 'z') {    //Z or z 키로 선택
                return SELECT;
            }
            else if (input == 'X' || input == 'x') {    //X or x 키로 취소
                return CANCEL;
            }
        }
    }
}