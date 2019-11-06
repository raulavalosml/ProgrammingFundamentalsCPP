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
# include <fstream>
# include "mi_libreria.cpp"

int a[3][3],b[3][3],r[3][3];

void pide()
{
	gotoxy(10,2); printf("Primera matriz");
	int ren=5;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(10,ren); printf("Coloca el valor de la posicion [%d][%d]: ",j,i); scanf("%d",&a[j][i]);
			if ((a[j][i]>999) || (a[j][i]<1))
			{
				gotoxy(10,20); printf("Error, el rango va de 1 a 999...");
				getche();
				gotoxy(10,20); printf("                                ");
				gotoxy(10,ren); printf("                                                                           ");
				ren--;
				j--;
			}
			ren++;
		}
	}
	gotoxy(10,20); printf("Primera matriz guardada correctamente [ENTER] para continuar...");
	getche();
	
	system("cls");
	
	gotoxy(10,2); printf("Segunda matriz");
	ren=5;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(10,ren); printf("Coloca el valor de la posicion [%d][%d]: ",j,i); scanf("%d",&b[j][i]);
			if ((b[j][i]>999) || (b[j][i]<1))
			{
				gotoxy(10,20); printf("Error, el rango va de 1 a 999...");
				getche();
				gotoxy(10,20); printf("                                ");
				gotoxy(10,ren); printf("                                                                           ");
				ren--;
				j--;
			}
			ren++;
		}
	}
	gotoxy(10,20); printf("Segunda matriz guardada correctamente [ENTER] para continuar...");
}

void tercer_m()
{
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			r[j][i]=a[j][i]+b[j][i];
		}
	}
}

void despliega()
{
	system("cls");
	//matriz a
	gotoxy(15,0); printf("Matriz 	A");
	cuadro(15,1,3,3);
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(17+j*6,2+i*2); printf("%3d", a[j][i]);
		}
	}
	
	// matriz b
	gotoxy(15,9); printf("Matriz B");
	cuadro(15,10,3,3);
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(17+j*6,11+i*2); printf("%3d", b[j][i]);
		}
	}
	
	//matriz r
	gotoxy(15,17); printf("Matriz suma de Matriz A y Matriz B");
	cuadro(15,18,3,3);
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(17+j*6,19+i*2); printf("%3d", r[j][i]);
		}
	}
}

main()
{
	pide();
	tercer_m();
	despliega();
	getche();
	
}
