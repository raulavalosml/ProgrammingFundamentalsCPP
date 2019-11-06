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

int a[5];

void captura()
{
	for(int i=0;i<=4;i++)
	{
		printf("Coloca el valor de la posici%cn %d",162,i);
		scanf("%d",&i);
	}
}

void lista()
{
	printf("\nLos valores en el orden de la lista son: \n");
	for(int i=0;i<=4;i++) printf("%d\n",a[i]);
}

void inversa()
{
	printf("\nLos valores inversos son: \n");
	for(int i=4;i>=0;i--) printf("%d\n",a[i]);
	
}

main()
{
	captura();
	lista();
	inversa();
	getche();
}
