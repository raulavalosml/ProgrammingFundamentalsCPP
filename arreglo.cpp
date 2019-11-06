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

void captura()
{
	int arr[5],i;
	for (i=0;i<=4;i++)
	{
		gotoxy(10,5+i); printf("Coloca el valor de la posicion %d: ",i); scanf("%d",&arr[i]);
	}
	getche();
}

void lista()
{
	int arr[5],i;
	gotoxy (10,11); printf("Lista:");
	for (i=0;i<=4;i++)
	{
		gotoxy(10,12+i); printf("El valor de la posicion %d es: %d",i,arr[i]);
	}
	getche();
}

void inverso()
{
	int arr[5],i;
	gotoxy(10,18); printf("Lista Inversa:");
	for (i=4;i>=0;i--)
	{
		gotoxy(10,23-i); printf("El valor de la posicion %d es: %d",i,arr[i]);
	}
	getche();	
}

main()
{
	captura();
	lista();
	inverso();	
}
