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

void menu()
{
	int op;
	
	gotoxy(10,5);  printf("Menu");	
	gotoxy(10,6);  printf("1) Suma");
	gotoxy(10,7);  printf("2) Resta");
	gotoxy(10,8);  printf("3) Multiplicacion");
	gotoxy(10,9);  printf("4) Division");
	gotoxy(10,10); printf("5) Terminar");
	op=0;
	while ((op>5)||(op<1))
	{
		gotoxy(10,11); printf("Coloca la opcion deseada: "); scanf("%d",&op);
		if ((op>5)||(op<1))
		{
			gotoxy(10,12); printf("Error, el rango va de 1 a 5 [ENTER] para continuar...");
			getche();
			gotoxy(10,12); printf("                                                     ");
			gotoxy(26,11); printf("                                                     ");
		}
	}
}

void pide_valores()
{
	int x,y;
	system("cls");
	x=0;
	while ((x>1000)||(x<1))
	{
		gotoxy(10,11); printf("Da el valor de x: "); scanf("%d",&x);
		if ((x>1000)||(x<1))
		{
			gotoxy(10,12); printf("Error, el rango va de 1 a 1000...[ENTER] para continuar...");
			getche();
			gotoxy(10,12); printf("                                                          ");
			gotoxy(27,11); printf("                                                          ");
		}
	}
	
	y=0;
	while ((y>1000)||(y<1))
	{
		gotoxy(10,13); printf("Da el valor de y: "); scanf("%d",&y);
		if ((y>1000)||(y<1))
		{
			gotoxy(10,14); printf("Error, el rango va de 1 a 1000...[ENTER] para continuar...");
			getche();
			gotoxy(10,14); printf("                                                          ");
			gotoxy(27,13); printf("                                                          ");
		}
	}
}

main()
{

	menu();
	getche();
}
