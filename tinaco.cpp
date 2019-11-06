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

int litros,nivel=14;

void vaciado()
{
	gotoxy(41,19); printf("Tinaco lleno, [ENTER] para vaciar...");
	getche();
	gotoxy(41,17); printf("                                         ");
	gotoxy(41,19); printf("                                         ");
	gotoxy(48,15); printf("   ");
	gotoxy(48,16); printf("| |");
	nivel++;
	
	for(int j=1; j<=litros/100;j++)
	{
		for(int i=15;i<=24;i++)
		{
			gotoxy(49,i); printf("*");
			Sleep(50);
			gotoxy(49,i); printf(" ");
		}
		gotoxy(42,nivel); printf("               ");
		nivel++;
	}
}

void llenado()
{
	for(int j=1;j<=litros/100;j++)
	{
		for(int i=1;i<=nivel;i++)
		{
			gotoxy(49,i); printf("*");
			Sleep(50);
			gotoxy(49,i); printf(" ");
		}
		gotoxy(42,nivel); printf("***************");
		nivel--;
	}
	
}

void pinta_tinaco()
{
	gotoxy(41,5);  printf("|               | <- 1000 Lts.");
	gotoxy(41,6);  printf("|               | <-  900 Lts.");
	gotoxy(41,7);  printf("|               | <-  800 Lts.");
	gotoxy(41,8);  printf("|               | <-  700 Lts.");
	gotoxy(41,9);  printf("|               | <-  600 Lts.");
	gotoxy(41,10); printf("|               | <-  500 Lts.");
	gotoxy(41,11); printf("|               | <-  400 Lts.");
	gotoxy(41,12); printf("|               | <-  300 Lts.");
	gotoxy(41,13); printf("|               | <-  200 Lts.");
	gotoxy(41,14); printf("|               | <-  100 Lts.");
	gotoxy(41,15); printf("|---------------|             ");
}



void pide_litros()
{
	litros=0;
	
	while ((litros>1000)||(litros<100)||(litros%100!=0))
	{
		gotoxy(41,17); printf("                     "); 
		gotoxy(41,17); printf("Indica litros: "); scanf("%d",&litros);
		
		if ((litros>1000)||(litros<100)||(litros%100!=0))
		{
			gotoxy(30,24);
			printf("Error, litros entre 100 y 1000 y multiplos de 100...");
			getche();
			gotoxy(30,24);
			printf("													");
		}
	}
}

main()
{
	pinta_tinaco();
	pide_litros();
	llenado();
	vaciado();
	getche();
	
}
