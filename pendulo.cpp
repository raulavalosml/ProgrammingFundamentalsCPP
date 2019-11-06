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

int n;

void pinta_techo()
{
	for (int i=1;i<=98;i++)
	{
		gotoxy(i,1); printf("=");
	}
	
	for(int i=2;i<=4;i++)
	{
		gotoxy(50,i); printf("|");
	}
}

void piramide(int col, int ren)
{
	gotoxy(col,ren);   printf("  @  ");
	gotoxy(col,ren+1); printf(" @@@ ");
	gotoxy(col,ren+2); printf("@@@@@");
	gotoxy(col,ren+3); printf(" @@@ ");
	gotoxy(col,ren+4); printf("  @  ");
}

void pos3()
{
	for(int i=5;i<=14;i++)
	{
		gotoxy(50,i); printf("*");
	}
	piramide(48,15);
}

void pos1()
{
	for(int i=49;i<=30;i=1-2)
	{
		gotoxy(i,5); printf(" *");
	}
	piramide(26,3);
}

void pos2()
{
	for(int i=1;i<=10;i++)
	{
		gotoxy(52-i*2,4+i); printf("*");
	}
	piramide(28,15);
}

void pos4()
{
	for(int i=1;i<=10;i++)
	{
		gotoxy(48+i*2,4+i); printf("*");
	}
	piramide(68,15);
}

void pos5()
{
	for(int i=5;i<=14;i++)
	{
		gotoxy(50,i); printf("*");
	}
}



main()
{
	
	pinta_techo();
	pos1(); Sleep(100); system("cls"); pinta_techo();
	pos2(); Sleep(100); system("cls"); pinta_techo();
	pos3(); Sleep(100); system("cls"); pinta_techo();
	pos4(); Sleep(100); system("cls"); pinta_techo();
	pos5(); Sleep(100); system("cls"); pinta_techo();
	pos4(); Sleep(100); system("cls"); pinta_techo();
	pos3(); Sleep(100); system("cls"); pinta_techo();
	pos2(); Sleep(100); system("cls"); pinta_techo();
	pos1(); Sleep(100); system("cls"); pinta_techo();
	getche();
}
//void pinta_lazo
