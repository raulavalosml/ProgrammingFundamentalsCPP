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
# include <fstream>
# include "mi_libreria.cpp"

int a[3][3],no_jugador=1,casilla,ganador;
bool sw_juego,sw_existe_casilla;



void inicial()
{
	a[0][0]=1; a[1][0]; a[2][0];
	a[0][1]=1; a[1][1]; a[2][1];
	a[0][2]=1; a[1][2]; a[2][2];
}

void despliega()
{
	for(int i=0;i<=16;i++)
	{
		gotoxy(41+i,6); printf("%c",196);
		gotoxy(41+i,8); printf("%c",196);
	}
	
	for(int i=0;i<=4;i++)
	{
		gotoxy(46,5+i); printf("%c",179);
		gotoxy(52,5+1); printf("%c",179);
	}
	gotoxy(46,6); printf("%c",197);
	gotoxy(46,8); printf("%c",197);
	gotoxy(52,6); printf("%c",197);
	gotoxy(52,8); printf("%c",197);
	for(int i=0;i<=2;i++)
	{
		for (int j=0;j<=2;j++)
		{
			gotoxy(43+j*6,5+i*2);
			if (a[j][i]>0) printf("%d",a[j][i]);
			if (a[j][i]==-1) printf("X");
			if (a[j][i]==-2) printf("O",a[j][i]);
		}
	}
}

void juego()
{
	bool sw_juego=false;
	while (!sw_juego)
	{
		gotoxy(41,13); printf("Turno del jugador --> %d <--",no_jugador);
		casilla=0;
		while ((casilla<1)||(casilla>9))
		{
			gotoxy(41,15); printf("                                         ");
			gotoxy(41,15); printf("Indica la casilla: "); scanf("%d",&casilla);
			if ((casilla<1)||(casilla>9))
			{
				gotoxy(35,23); printf("Error, casilla entre 1 y 9...");
				getche();
				gotoxy(35,23); printf("                             ");
			}
		}
	
	
		sw_existe_casilla=false;
		for (int i=0;i<=2;i++)
		{
			for(int j=0; j<=2;j++)
			{
				if (a[j][i]==casilla)
				{
					sw_existe_casilla=true;
					if(no_jugador==1)
					{
						a[j][i]=-1;
						no_jugador=2;
					}
					else
					{
						a[j][i]=-2;
						no_jugador=1;
					}
				}
			}
		}
		if(!sw_existe_casilla)
		{
			gotoxy(35,23); printf("Error, casilla con tiro previo...");
			getche();
			gotoxy(35,23); printf("                                 ");
		}
		despliega();
		
		ganador=0;
		if ((a[0][0]==-1)&&(a[1][0]==-1)&&(a[2][0]==-1)) ganador=1;
		if ((a[0][1]==-1)&&(a[1][1]==-1)&&(a[2][1]==-1)) ganador=1;
		if ((a[0][2]==-1)&&(a[1][2]==-1)&&(a[2][2]==-1)) ganador=1;
		if ((a[0][0]==-1)&&(a[0][1]==-1)&&(a[0][2]==-1)) ganador=1;
		if ((a[1][0]==-1)&&(a[1][1]==-1)&&(a[1][2]==-1)) ganador=1;
		if ((a[2][0]==-1)&&(a[2][1]==-1)&&(a[2][2]==-1)) ganador=1;
		if ((a[0][0]==-1)&&(a[1][1]==-1)&&(a[2][2]==-1)) ganador=1;
		if ((a[2][0]==-1)&&(a[1][1]==-1)&&(a[0][2]==-1)) ganador=1;
	
		if ((a[0][0]==-2)&&(a[1][0]==-2)&&(a[2][0]==-2)) ganador=2;
		if ((a[0][1]==-2)&&(a[1][1]==-2)&&(a[2][1]==-2)) ganador=2;
		if ((a[0][2]==-2)&&(a[1][2]==-2)&&(a[2][2]==-2)) ganador=2;
		if ((a[0][0]==-2)&&(a[0][1]==-2)&&(a[0][2]==-2)) ganador=2;
		if ((a[1][0]==-2)&&(a[1][1]==-2)&&(a[1][2]==-2)) ganador=2;
		if ((a[2][0]==-2)&&(a[2][1]==-2)&&(a[2][2]==-2)) ganador=2;
		if ((a[0][0]==-2)&&(a[1][1]==-2)&&(a[2][2]==-2)) ganador=2;
		if ((a[2][0]==-2)&&(a[1][1]==-2)&&(a[0][2]==-2)) ganador=2;
		
		if (ganador!=0) sw_juego=true;
	}
	gotoxy(35,23); printf("El ganador es %d!!!",ganador);
	getche();

}



main()
{
	inicial();
	despliega();
	juego();
}
