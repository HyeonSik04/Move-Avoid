#include <stdio.h>
#include <Windows.h>

void setting() {
	//창 이름
	SetConsoleTitle(TEXT("Move&Avoid"));
	//창 크기
	system("mode con:cols=80 lines=35");

	//깜빡이는 커서 없애기
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.bVisible = 0;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	//드래그 안되게 하기
	/*
	DWORD prevMode;
	GetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), &prevMode);
	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), prevMode & ~ENABLE_QUICK_EDIT_MODE);
	*/
}

/*
* x = 19 , y = 7;

┌───────┬───────┬───────┬───────┬───────┐
│       │       │       │       │       │
│ 23, 9 │ 31, 9 │ 39, 9 │ 47, 9 │ 55, 9 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,13 │ 31,13 │ 39,13 │ 47,13 │ 55,13 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,17 │ 31,17 │ 39,17 │ 47,17 │ 55,17 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,21 │ 31,21 │ 39,21 │ 47,21 │ 55,21 │
│       │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┤
│       │       │       │       │       │
│ 23,25 │ 31,25 │ 39,25 │ 47,25 │ 55,25 │
│       │       │       │       │       │
└───────┴───────┴───────┴───────┴───────┘

─
│
┌
┐
└
┘
┼
├
┬
┤
┴

*/