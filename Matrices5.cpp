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

int a[3][3],r[4][4];

void pide()
{
	int ren=5;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(10,ren); printf("Coloca el valor de la posicion [%d][%d]: ",j,i); scanf("%d",&a[j][i]);
			if ((a[j][i]>999)||(a[j][i]<1))
			{
				gotoxy(10,20); printf("Error, el rango va de 1 a 999...");
				getche();
				gotoxy(10,20); printf("                                ");
				gotoxy(10,ren); printf("                                                               ");
				ren--;
				j--;
			}
			ren++;
		}
	}
}

void primero()
{
	for (int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			r[j][i]=a[j][i];
		}
	}
}

void segundo()
{
	//suma de columnas
	r[0][3]=a[0][0]+a[0][1]+a[0][2];
	r[1][3]=a[1][0]+a[1][1]+a[1][2];
	r[2][3]=a[2][0]+a[2][1]+a[2][2];
	
	//suma de renglones
	r[3][0]=a[0][0]+a[1][0]+a[2][0];
	r[3][1]=a[0][1]+a[1][1]+a[2][1];
	r[3][2]=a[0][2]+a[1][2]+a[2][2];		

}

void despliega()
{
	for (int i=0;i<=3;i++)
	{
		for (int j=0;j<=3;j++)
		{
			gotoxy(17+j*6,11+i*2); printf("%3d", r[j][i]);
		}
	}
	gotoxy(37,17); printf(" ");
	gotoxy(37,17); printf("X");
}

main()
{
	pide();
	primero();
	segundo();
	system("cls");
	cuadro(15,10,4,4);
	despliega();
	getche();
}
