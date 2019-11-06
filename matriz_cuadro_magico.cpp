#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
# include <math.h>
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <String.h>
# include <windows.h>
# include "mi_libreria.cpp"

int a[4][4];

void inicial()
{
	a[0][0]=4;  a[1][0]=12; a[2][0]=13; a[3][0]=7; 
	a[0][1]=14; a[1][1]=5;  a[2][1]=9;  a[3][1]=3;
	a[0][2]=6;  a[1][2]=0;  a[2][2]=2;  a[3][2]=15;
	a[0][3]=11; a[1][3]=8;  a[2][3]=10; a[3][3]=1;
}

void despliega()
{
	cuadro(36,5,4,4);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			gotoxy(38+j*6,6+i*2);
			if (a[j][i]!=0) printf("%2d",a[j][i]);
			else printf(" ");	
		}
	}
}
