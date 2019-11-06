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


int vb,vm,va,fb,fm,fa,tcb;

void menu()
{
	// vb=verduras bajas en grasa; vm=verduras moderadas en grasa; va=verduras altas en grasa.
	printf("Porcion de verduras bajas en potasio    : "); scanf("%d",&vb);
	printf("Porcion de verduras moderadas en potasio: "); scanf("%d",&vm);
	printf("Porcion de verduras altas en potasio    : "); scanf("%d",&va);
	
	printf("\nPorcion de frutas bajas en potasio  : "); scanf("%d",&fb);
	printf("Porcion de frutas moderadas en potasio: "); scanf("%d",&fm);
	printf("Porcion de frutas altas en potasio    : "); scanf("%d",&fa);
	
	printf("\nPorcion de tuberculos y cereales bajos en grasa: "); scanf("%d",&tcb);2
}


main()
{
	menu();
}
