#include <stdio.h>
#include <windows.h>
#include "gotoxy.h"

void print_title() {
	system("cls");

	int x = 2, y = 1;
	gotoxy(x, y);
	printf(" 7MMM.     ,MMF                                      ,gM\"\"bg\n");
	gotoxy(x, ++y);
	printf("  MMMb    dPMM                                       8MI  ,8\n");
	gotoxy(x, ++y);
	printf("  M YM   ,M MM    ,pW\"Wq.  `7M'   `MF'  .gP\"Ya        WMp,\"\n");
	gotoxy(x, ++y);
	printf("  M  Mb  M' MM   6W'   `Wb   VA   ,V   ,M'   Yb      ,gPMN.  jM\"\n");
	gotoxy(x, ++y);
	printf("  M  YM.P'  MM   8M     M8    VA ,V    8M\"\"\"\"\"\"     ,M.  YMp.M'\n");
	gotoxy(x, ++y);
	printf("  M  `YM'   MM   YA.   ,A9     VVV     YM.    ,     8Mp   ,MMp\n");
	gotoxy(x, ++y);
	printf(".JML.     .JMML.  `Ybmd9'       W       `Mbmmd'     `YMbmm'``MMm.\n");
	y += 3;
	x = 25;
	gotoxy(x, y);
	printf("                                    ,,          ,,\n");
	gotoxy(x, ++y);
	printf("      db                            db        `7MM\n");
	gotoxy(x, ++y);
	printf("     ;MM:                                       MM\n");
	gotoxy(x, ++y);
	printf("    ,V^MM.  `7M'   `MF'  ,pW\"Wq.  `7MM,     M\"\"bMM\n");
	gotoxy(x, ++y);
	printf("   ,M  `MM    VA   ,V   6W'   `Wb   MM   ,AP    MM\n");
	gotoxy(x, ++y);
	printf("   AbmmmqMA    VA ,V    8M     M8   MM   8MI    MM\n");
	gotoxy(x, ++y);
	printf("  A'     VML    VVV     YA.   ,A9   MM   `Mb    MM\n");
	gotoxy(x, ++y);
	printf(".AMA.   .AMMA.   W       `Ybmd9'  .JMML.  `Wbmd\"MML.\n");

	x = 36, y = 24;
	gotoxy(x, y);
	printf("게임시작");
	gotoxy(x, 26);
	printf("게임설명");
	gotoxy(x, 28);
	printf("게임종료");
}


/*
 7MMM.     ,MMF                                      ,gM""bg
  MMMb    dPMM                                       8MI  ,8
  M YM   ,M MM    ,pW"Wq.  `7M'   `MF'  .gP"Ya        WMp,"
  M  Mb  M' MM   6W'   `Wb   VA   ,V   ,M'   Yb      ,gPMN.  jM"
  M  YM.P'  MM   8M     M8    VA ,V    8M""""""     ,M.  YMp.M'
  M  `YM'   MM   YA.   ,A9     VVV     YM.    ,     8Mp   ,MMp
.JML.     .JMML.  `Ybmd9'       W       `Mbmmd'     `YMbmm'``MMm.



									,,          ,,
	  db                            db        `7MM
	 ;MM:                                       MM
	,V^MM.  `7M'   `MF'  ,pW"Wq.  `7MM     ,M""bMM
   ,M  `MM    VA   ,V   6W'   `Wb   MM   ,AP    MM
   AbmmmqMA    VA ,V    8M     M8   MM   8MI    MM
  A'     VML    VVV     YA.   ,A9   MM   `Mb    MM
.AMA.   .AMMA.   W       `Ybmd9'  .JMML.  `Wbmd"MML.
*/