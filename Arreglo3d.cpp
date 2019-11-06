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

int a[3][3];

void pide()
{
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			printf("Coloca el valor de la posicion [%d][%d]: ",j,i); scanf("%d",&a[j][i]);
		}
	}
}

void despliega()
{
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(42+j*6,10+i*2); printf("%3d", a[j][i]);
		}
	}
}


main()
{
	pide();
	//getche();
	cuadro(40,9,3,3);
	despliega();
	getche();
}
