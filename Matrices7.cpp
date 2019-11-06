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

int a[4][4],x,y,w,z,c,b,r=0,r1=0,r2=0,s=0,aux;

main()
{
	a[0][0]=14; a[1][0]=3;  a[2][0]=1;  a[3][0]=7;
	a[0][1]=0;  a[1][1]=4;  a[2][1]=6;  a[3][1]=9;
	a[0][2]=8;  a[1][2]=15; a[2][2]=12; a[3][2]=2;
	a[0][3]=5;  a[1][3]=10; a[2][3]=11; a[3][3]=13;	
	
	cuadro(10,5,4,4);
	for (int i=0;i<=3;i++)
	{
		for (int j=0;j<=3;j++)
		{
			if (a[j][i]==0)
			{
				gotoxy(12+j*6,6+i*2); printf(" ");
			}
			else
			{
				gotoxy(12+j*6,6+i*2); printf("%d",a[j][i]);
			}
		}
	}	

	while (s==0)
	{
		r=0;
		while (r==0)
		{
			//pide valores
			x=-1;
			while ((x>15)||(x<0))
			{
				gotoxy(42,5); printf("Coloca el primer valor: "); scanf("%d",&x);
				if ((x>15)||(x<0))
				{
					gotoxy(42,15); printf("Error, el rango va de 0 a 15...");
					getche();
					gotoxy(42,15); printf("                               ");
					gotoxy(42,5); printf("                                                               ");
				 } 
			}
			
			y=16;
			while ((y>15)||(y<0))
			{
				gotoxy(42,6); printf("Coloca el segundo valor: "); scanf("%d",&y);
				if ((y>15)||(y<0))
				{
					gotoxy(42,15); printf("Error, el rango va de 0 a 15...");
					getche();
					gotoxy(42,15); printf("                               ");
					gotoxy(42,6); printf("                                                               ");
				} 
			}
			
			for (int i=0;i<=3;i++)
			{
				for (int j=0;j<=3;j++)
				{
					if (x==a[j][i])
					{
						w=j;
						z=i;
						r1=1;
					}
				}
			}
		
			for (int i=0;i<=3;i++)
			{
				for (int j=0;j<=3;j++)
				{
					if (y==a[j][i])
					{
						b=j;
						c=i;
						r2=1;
					}
				}
			}
			
			if(x==y)
			{
				gotoxy(42,15); printf("Error, ambos valores deben de tener valores diferentes...");
				getche();
				gotoxy(42,15); printf("                                                         ");
				gotoxy(42,5); printf("                                                               ");
				gotoxy(42,6); printf("                                                               ");
				r1=0;
				r2=0;
			}
			
			if ((r1==1)&&(r2==1))
			{
				r=1;
			}
		}
		
		aux=a[b][c];
		a[b][c]=a[w][z];
		a[w][z]=aux;
		system("cls");
		cuadro(10,5,4,4);
		for (int i=0;i<=3;i++)
		{
			for (int j=0;j<=3;j++)
			{
				if (a[j][i]==0)
				{
					gotoxy(12+j*6,6+i*2); printf(" ");
				}
				else
				{
					gotoxy(12+j*6,6+i*2); printf("%d",a[j][i]);
				}
			}
		}	
		
		if ((a[0][0]==1) && (a[1][0]==2) && (a[2][0]==3) && (a[3][0]==4) && (a[0][1]==5) && (a[1][1]==6) && (a[2][1]==7) && (a[3][1]==8) && (a[0][2]==9) && (a[1][2]==10) && (a[2][2]==11) && (a[3][2]==12) && (a[0][3]==13) && (a[1][3]==14) && (a[2][3]==15) && (a[3][3]==0))   
		{
			s=1;	
		}      
		
		if ((a[0][0]==1) && (a[1][0]==5) && (a[2][0]==9) && (a[3][0]==13) && (a[0][1]==2) && (a[1][1]==6) && (a[2][1]==10) && (a[3][1]==14) && (a[0][2]==3) && (a[1][2]==7) && (a[2][2]==11) && (a[3][2]==15) && (a[0][3]==4) && (a[1][3]==8) && (a[2][3]==12) && (a[3][3]==0))
		{
			s=1;
		}
		
		if ((a[0][0]==1) && (a[1][0]==2) && (a[2][0]==3) && (a[3][0]==4) && (a[0][1]==12) && (a[1][1]==13) && (a[2][1]==14) && (a[3][1]==5) && (a[0][2]==11) && (a[1][2]==0) && (a[2][2]==15) && (a[3][2]==6) && (a[0][3]==10) && (a[1][3]==9) && (a[2][3]==8) && (a[3][3]==7))
		{
			s=1;
		}
	}
	
	gotoxy(42,20); printf("Has ganado el juego!!!");
	getche();
	system("cls");
	gotoxy(42,20); printf("Has ganado el juego!!!");
	getche();
	
}
