#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int a[5];

void captura()
{
	
	for(int i=0;i<5;i++)
	{
		printf("Coloca el valor de la posicion %d: ",i); scanf("%d",&a[i]);
	}
	getche();
}

void lista()
{
	printf("\nLista en el orden de captura\n");
	for(int i=0;i<5;i++)
	{
		printf("El valor de la posicion %d es: %d\n",i,a[i]);
	}
}

void inversa()
{
	printf("\nLista inversa\n");
	for (int i=4;i>=0;i--)
	{
		printf("El valor de la posicion %d es: %d\n",i,a[i]);
	}
}

main()
{

	captura();
	lista();
	inversa();
}
