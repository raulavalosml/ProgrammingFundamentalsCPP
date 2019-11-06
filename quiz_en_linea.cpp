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


int mi_funcion(int x, int y)
{
	int z=0;
	int r=1;
	while (z<y)
	{
		r=r*x;
		z=z+1;
	}
	return (r);
}

main()
{
    int r=5;
	r=mi_funcion(5,3);
	printf("El valor de r es: %d",r);
}
