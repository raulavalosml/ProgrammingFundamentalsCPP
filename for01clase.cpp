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

long int x,y,i,cont;

main()
{
	system("color 0a");
	
	while (y-x<10)
	{
		x=0;
		while ((x>1000)||(x<1))
		{
			system("cls");
			gotoxy(30,5);
			printf("Indica el valor de X: "); scanf("%d",&x);
			
			if ((x>1000)||(x<1))
			{
				system("color 47");
				gotoxy(25,23);
				printf("Valor fuera de rango entre 1 y 1000");
				getche();
				system("color 0a");
			}
		}
		
		
		y=0;
		while ((y>1000)||(y<1))
		{
			gotoxy(30,6);
			printf("                           ");
			gotoxy(30,6);
			printf("Indica el valor de Y: "); scanf("%d",&y);
			
			if ((y>1000)||(y<1))
			{
				system("color 47");
				gotoxy(25,23);
				printf("Valor fuera de rango entre 1 y 1000");
				getche();
				gotoxy(25,23);
				printf("                                   ");
				system("color 0a");
			}
		}
		
		if(y-x<10)
		{
			system("color 4f");
			gotoxy(25,23);
			printf("Error, X debe de ser mayor que Y al menos en 10 unidades...");
			getche();
			gotoxy(25,23);
			printf("                ");
			system("color 0a");
		}
	}
	
	gotoxy(30,8);
	printf("Los primos entre %d y %d son: ",x,y);
	gotoxy(30,9);
	for(int i=x;i<=y;i++)
	{
		cont=0;
		for(int j=2;j<i;j++)
		if (i%j==0) cont++;
		if (cont==0) printf("%d, ",i);
	}
	getche();
	
}
