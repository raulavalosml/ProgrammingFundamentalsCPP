#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>>
main()
{
	for(int i=1;i<=90;i++)
	{
		gotoxy(i,10);
		printf("*");
		Sleep(100);
		Beep(660,100); Sleep(100);
		gotoxy(i,10);
		printf(" ");
				
	}
	getche();
}
