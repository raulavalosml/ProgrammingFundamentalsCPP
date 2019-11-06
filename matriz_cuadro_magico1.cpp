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

int a[4][4],col_cero,ren_cero,s[4][4],valor;

void inicial()
{
	s[0][0]=1;  s[1][0]=2;  s[2][0]=3;  s[3][0]=4; 
	s[0][1]=5;  s[1][1]=6;  s[2][1]=7;  s[3][1]=8;
	s[0][2]=9;  s[1][2]=10; s[2][2]=11; s[3][2]=12;
	s[0][3]=13; s[1][3]=14; s[2][3]=15; s[3][3]=16;
	
	a[0][0]=4;  a[1][0]=12; a[2][0]=13; a[3][0]=7; 
	a[0][1]=14; a[1][1]=5;  a[2][1]=9;  a[3][1]=3;
	a[0][2]=6;  a[1][2]=0;  a[2][2]=2;  a[3][2]=15;
	a[0][3]=11; a[1][3]=8;  a[2][3]=10; a[3][3]=1;
}

void despliega()
{
	cuadro(36,5,4,4);
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			gotoxy(38+j*6,6+i*2);
			if (a[j][i]!=0) printf("%2d",a[j][i]);
			else printf(" ");	
		}
	}
}

void juego()
{
	int sw_juego=0;
	while (sw_juego==0)
	{
		valor=0;
		while ((valor>15) || (valor<1))
		{
			printf("Coloca el valor a mover: "); scanf("%d",&valor);
			if ((valor<1)||(valor>15))
			{
				gotoxy(35,23); printf("Valor fuera de rango, entre 1 y 15...");
				getche();
				gotoxy(35,23); printf("                                     ");
			}
			
		}
	
	
		for (int i=0;i<=3;i++)
		{
			for (int j=0;j<=3;j++)
			{
				if (a[j][i]==valor)
				{
					a[col_cero][ren_cero]=valor;
					a[j][i]=0;
					col_cero=j;
					ren_cero=i;
					i=5;
					j=5;
				}
			}
		}
		despliega();
		sw_juego=1;
		for(int i=0;i<=3;i++)
		{
			for(int j=0;j<=3;j++)
			{
				if(a[j][i] != s[j][i])
				{
					sw_juego=0;
				}
			}
		}
	}
	gotoxy(35,23); printf("Ganaste...");
}
main()
{
	inicial();
	despliega();
	getche();
}
