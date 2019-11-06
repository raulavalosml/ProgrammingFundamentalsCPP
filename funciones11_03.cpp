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

void cara()
{
	int x,y;
	system("cls");
	gotoxy(x,y);   printf("*******");
	gotoxy(x,y+1); printf("* * * *");
	gotoxy(x,y+2); printf("*  *  *");
	gotoxy(x,y+3); printf("* *** *");
	gotoxy(x,y+4); printf("*******");
	
}

void error()
{
	gotoxy(10,7); printf("ERROR, el valor va de 1 a 10...");
	getche();
	gotoxy(10,7); printf("                               ");
	gotoxy(25,5); printf("                         ");
	gotoxy(25,6); printf("                         ");
}

void pide_datos()
{
	int x=0,y=0;
	
	while ((x>10)||(x<1))
	{
		gotoxy(10,5); printf("Coloca el valor de X: "); scanf("%d",&x);
		
		if ((x>10)||(x<1))
		{
			error();
		}
	}
	
	while ((y>10)||(y<1))
	{
		gotoxy(10,6); printf("Coloca el valor de Y: "); scanf("%d",&y);
		
		if ((y>10)||(y<1))
		{
			error();
		}
	}
}


main()
{
	pide_datos();
	cara();
}
