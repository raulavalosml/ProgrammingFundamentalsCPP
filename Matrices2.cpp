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

int a[3][3],x,y,b,r=0;

void pide()
{
	int ren=5;
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			
			gotoxy(5,ren); printf("Coloca el valor de la posicio [%d][%d]: ",j,i); scanf("%d",&a[j][i]);
			if ((a[j][i]>999) || (a[j][i]<1))
			{
				gotoxy(5,20); printf("Error, el rango va de 1 a 999...");
				getche();
				gotoxy(5,20); printf("                                ");
				gotoxy(5,ren); printf("                                                                                ");
				j--;
				ren--;
			}
			ren++;
		}
	}
	system("cls");
	gotoxy(5,20); printf("Valores guardados...");
}

void despliega()
{
	//equis y yes
	int q=0,s=0;

	for (int j=0;j<=2;j++)
	{
		gotoxy(17+j*6,4); printf("%d",q);
		q++;
	}
	
		gotoxy(35,4); printf("x");
	
	for (int i=0;i<=2;i++)
	{
		gotoxy(13,6+i*2); printf("%d",s);
		s++;
	}
		gotoxy(13,12); printf("y");	
	//matriz normal
	for (int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(17+j*6,6+i*2); printf("%3d", a[j][i]);
		}
	}
}

void coordenada()
{
	gotoxy(10,15); printf("Coloca la coordenada a buscar: ");
	x=3;
	while ((x<0)||(x>2))
	{
		gotoxy(10,16); printf("Coordenada x: "); scanf("%d",&x);
		if ((x<0)||(x>2))
		{
			gotoxy(10,20); printf("Error, el rango va de 0 a 2...");
			getche();
			gotoxy(10,20); printf("                              ");
			gotoxy(10,16); printf("                                                                ");
		}
	}
	
	y=3;
	while ((y<0)||(y>2))
	{
		gotoxy(10,17); printf("Coordenada y: "); scanf("%d",&y);
		if ((y<0)||(y>2))
		{
			gotoxy(10,20); printf("Error, el rango va de 0 a 2...");
			getche();
			gotoxy(10,20); printf("                              ");
			gotoxy(10,17); printf("                                                                ");
		}
	}
	
	gotoxy(10,20); printf("El valor de la coordenada solicitada es: %d",a[x][y]);
	getche();
}

void valor()
{
	gotoxy(10,15); printf("                                                       ");
	gotoxy(10,16); printf("                                                       ");
	gotoxy(10,17); printf("                                                       ");	
	gotoxy(10,18); printf("                                                       ");
	gotoxy(10,19); printf("                                                       ");
	gotoxy(10,20); printf("                                                       ");

	while (r==0)
	{
		gotoxy(10,15); printf("Coloca un valor a buscar en la matriz: "); scanf("%d",&b);
		
		for (int i=0;i<=2;i++)
		{
			for (int j=0;j<=2;j++)
			{
				if (b==a[j][i])
				{
					r=1; 
					x=j;
					y=i;
				}
			}
		}
		
		if (r==0)
		{
			gotoxy(10,20); printf("Las coordenadas del valor %d no se encuentra en la matriz");
			getche();
			gotoxy(10,20); printf("                                                         ");
			gotoxy(10,15); printf("                                                                 ");
		}
	}

		gotoxy(10,20); printf("Las coordenadas del valor %d es (%d,%d)",b,x,y);
}

main()
{
	pide();
	system("cls");
	cuadro(15,5,3,3);
	despliega();
	coordenada();
	valor();
	getche();
}

