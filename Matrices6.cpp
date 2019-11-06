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

int a[4][4],x,y,s=0,b,c,r1=0,w,z,r2=0,r,aux,d;

void muestra()
{
	for (int i=0;i<=3;i++)
	{
		for (int j=0;j<=3;j++)
		{
			gotoxy(17+j*6,6+i*2); printf("%3d", a[j][i]);
		}
	}
	gotoxy(36,4); printf("%d",d);
}

main()
{
	a[0][0]=3; a[1][0]=7; a[2][0]=1;
	a[0][1]=5; a[1][1]=9; a[2][1]=8;
	a[0][2]=2; a[1][2]=4; a[2][2]=6;	
	//suma de renglones
	a[3][0]=a[0][0]+a[1][0]+a[2][0];
	a[3][1]=a[0][1]+a[1][1]+a[2][1];
	a[3][2]=a[0][2]+a[1][2]+a[2][2];
	//suma de columnas
	a[0][3]=a[0][0]+a[0][1]+a[0][2];
	a[1][3]=a[1][0]+a[1][1]+a[1][2];
	a[2][3]=a[2][0]+a[2][1]+a[2][2];
	//suma diagonal
	a[3][3]=a[0][0]+a[1][1]+a[2][2];
	d=a[0][2]+a[1][1]+a[2][0];
	
	cuadro(15,5,3,3);
	muestra();
			

	while (s==0)
	{
		r=0;
		
		while (r==0)
		{
			b=0;
			while((b>9)||(b<1))
			{
				gotoxy(10,15); printf("Coloca el primer valor a buscar en la matriz: "); scanf("%d",&b);
				if ((b>9)||(b<1))
				{
					gotoxy(10,20); printf("ERROR, el rango va de 1 a 9...");
					getche();
					gotoxy(10,15); printf("                                                                         ");
					gotoxy(10,20); printf("                               ");
				}
			}
			
			
			for (int i=0;i<=2;i++)
			{
				for (int j=0;j<=2;j++)
				{
					if (b==a[j][i])
					{
						r1=1; 
						x=j;
						y=i;
					}
				}
			}
			
			c=0;
			while((c>9)||(c<1))
			{
				gotoxy(10,16); printf("Coloca el segundo valor a buscar en la matriz: "); scanf("%d",&c);
				if ((c>9)||(c<1))
				{
					gotoxy(10,20); printf("ERROR, el rango va de 1 a 9...");
					getche();
					gotoxy(10,16); printf("                                                                         ");
					gotoxy(10,20); printf("                               ");
				}
			}
			
			
			for (int i=0;i<=2;i++)
			{
				for (int j=0;j<=2;j++)
				{
					if (c==a[j][i])
					{
						r2=1; 
						w=j;
						z=i;
					}
				}
			}
			if(c==b)
			{
				gotoxy(10,20); printf("Error tiene que ser distintos valores los seleccionados...");
				getche();
				gotoxy(10,20); printf("                                                          ");
				r1=0;
				r2=0;
			}
			
			if((r1=1)&&(r2=1))
			{
				r=1;
			}
			
		}
		//cambio de posiciones
		aux=a[w][z];
		a[w][z]=a[x][y];
		a[x][y]=aux;
			
		//suma de renglones	
		a[3][0]=a[0][0]+a[1][0]+a[2][0];
		a[3][1]=a[0][1]+a[1][1]+a[2][1];
		a[3][2]=a[0][2]+a[1][2]+a[2][2];
		//suma de columnas
		a[0][3]=a[0][0]+a[0][1]+a[0][2];
		a[1][3]=a[1][0]+a[1][1]+a[1][2];
		a[2][3]=a[2][0]+a[2][1]+a[2][2];
		//suma diagonal
		a[3][3]=a[0][0]+a[1][1]+a[2][2];
		d=a[0][2]+a[1][1]+a[2][0];
				
		system("cls");
		cuadro(15,5,3,3);
		muestra();
		
		if ((a[3][0]==15) && (a[3][1]==15) && (a[3][2]==15) && (a[0][3]==15) && (a[1][3]==15) && (a[2][3]==15) && (a[3][3]==15) && (d==15))
		{
			s=1;
		}
		else
		{
			s=0;
		}
	}
	//7getche();
	//system("cls");
	gotoxy(10,20); printf("Has ganado el juego!!!!");
	getche();
	system("cls");
	gotoxy(10,20); printf("Has ganado el juego!!!!"); //para los distraidos que no leyeron el mensaje de ganaste!!!
	getche();
}

