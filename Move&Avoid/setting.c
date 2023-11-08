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