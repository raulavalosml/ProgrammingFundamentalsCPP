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


void carro(int i)
{
	gotoxy(i,1); printf("    ***    ");
	gotoxy(i,2); printf("    ***    ");
	gotoxy(i,3); printf("***********");
	gotoxy(i,4); printf("***********");
	gotoxy(i,5); printf("***********");
	gotoxy(i,6); printf("  **   **  ");
	gotoxy(i,7); printf("  **   **  ");	
		
}

void retardo()
{
	Sleep(100);
}

void borra(int i)
{
	gotoxy(i,1); printf("           ");
	gotoxy(i,2); printf("           ");
	gotoxy(i,3); printf("           ");
	gotoxy(i,4); printf("           ");
	gotoxy(i,5); printf("           ");
	gotoxy(i,6); printf("           ");
	gotoxy(i,7); printf("           ");	
}



main()
{
	for (int i=0;i<=60;i++)
	{
		carro(i);
		retardo();
		borra(i);
	}
}
	
		
	

