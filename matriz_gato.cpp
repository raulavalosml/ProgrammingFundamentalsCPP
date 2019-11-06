#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif

#include<stdio.h>
#include<conio.h>
#include <String.h>
# include <fstream>

using namespace std;

int a[3][3],ganador,cont=1,op=1,cj1,cj2,cg;
char j1[11],j2[11],e[11];

void inicial()
{
	a[0][0]=1;a[1][0]=2;a[2][0]=3;
	a[0][1]=4;a[1][1]=5;a[2][1]=6;
	a[0][2]=7;a[1][2]=8;a[2][2]=9;
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
		gotoxy(52,5+i); printf("%c",179);
	}
	gotoxy(46,6);printf("%c",197);
	gotoxy(46,8);printf("%c",197);
	gotoxy(52,6);printf("%c",197);
	gotoxy(52,8);printf("%c",197);
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			gotoxy(43+j*6,5+i*2);
			if(a[j][i]>0) printf("%d",a[j][i]);
			if(a[j][i]==-1) printf("X");
			if(a[j][i]==-2) printf("O");
		}
	}
}
void juego()
{
	bool sw_juego=false,sw_existecasilla,sw_gato;
	int casilla,tiros,jugador=1;
	while(!sw_juego)
	{
		if(jugador==1) 
		{
			gotoxy(10,5);printf("Turno del jugador---> %s <---",j1);
		}
		if(jugador==2) 
		{
			gotoxy(10,5);printf("Turno del jugador---> %s <---",j2);	
		}

		casilla=0;
		while(casilla<1||casilla>9)
		{
			gotoxy(41,15);printf("                                  ");
			gotoxy(41,15);printf("Indica la casilla: ");scanf("%d",&casilla);
			if(casilla<1||casilla>9)
			{
				gotoxy(35,23); printf("ERROR, casilla entre 1 y 9...");
				getche();
				gotoxy(35,23); printf("                             ");
			}
		}
		sw_existecasilla=false;
		for(int i=0;i<=2;i++)
		{
			for(int j=0;j<=2;j++)
			{
				if(a[j][i]==casilla)
				{
					sw_existecasilla=true;
					if(jugador==1)
					{
						a[j][i]=-1;
						jugador=2;
					}
					else if(jugador==2)
					{
						a[j][i]=-2;
						jugador=1;
					}
				//	tiros++;
				}
			}
		}
		if(!sw_existecasilla)
		{
			gotoxy(35,23);printf("ERROR, casilla con tiro previo");
			getche();
			gotoxy(35,23);printf("                              ");
		}
		despliega();
		//if(tiros==9) sw_juego=true;
		ganador=0;
		if(a[0][0]==-1&&a[1][0]==-1&&a[2][0]==-1)ganador=1;
		if(a[0][1]==-1&&a[1][1]==-1&&a[2][1]==-1)ganador=1;
		if(a[0][2]==-1&&a[1][2]==-1&&a[2][2]==-1)ganador=1;
		if(a[0][0]==-1&&a[0][1]==-1&&a[0][2]==-1)ganador=1;
		if(a[1][0]==-1&&a[1][1]==-1&&a[1][2]==-1)ganador=1;
		if(a[2][0]==-1&&a[2][1]==-1&&a[2][2]==-1)ganador=1;
		if(a[0][0]==-1&&a[1][1]==-1&&a[2][2]==-1)ganador=1;
		if(a[2][0]==-1&&a[1][1]==-1&&a[0][2]==-1)ganador=1;
		
		if(a[0][0]==-2&&a[1][0]==-2&&a[2][0]==-2)ganador=2;
		if(a[0][1]==-2&&a[1][1]==-2&&a[2][1]==-2)ganador=2;
		if(a[0][2]==-2&&a[1][2]==-2&&a[2][2]==-2)ganador=2;
		if(a[0][0]==-2&&a[0][1]==-2&&a[0][2]==-2)ganador=2;
		if(a[1][0]==-2&&a[1][1]==-2&&a[1][2]==-2)ganador=2;
		if(a[2][0]==-2&&a[2][1]==-2&&a[2][2]==-2)ganador=2;
		if(a[0][0]==-2&&a[1][1]==-2&&a[2][2]==-2)ganador=2;
		if(a[2][0]==-2&&a[1][1]==-2&&a[0][2]==-2)ganador=2;
		
		sw_gato=false;
		for(int i=0;i<=2;i++) for(int j=0;j<=2;j++) if(a[j][i]>0) sw_gato=true;
		
		if ((ganador!=0) || (!sw_gato)) sw_juego=true;
	}
	
	gotoxy(35,23);
	if((sw_gato==false)&&(ganador==0)) 
	{
		printf("Nadie gana se hizo GATO...");
		e[0]='G';
		e[1]='a';
		e[2]='t';
		e[3]='o';	
		cg++;
	}
	else 
	{
		if(ganador==1)
		{
			printf("El ganador es el jugador %s",j1);	
			strcpy(e,j1);
			cj1++;	
		}
		
		if(ganador==2)
		{
			printf("El ganador es el jugador %s",j2);
			strcpy(e,j2);
			cj2++;		
		}
				
		
	}
	getche();
	system("cls");
	
	gotoxy(10,5); printf("Desea continuar? 1=si 2=no: "); scanf("%d",&op);
	if(op==1)
	{
		cont++;
	}
	
		ofstream archivo;
		archivo.open("juegos.txt",ios::app);
		archivo <<e <<"\n";
		archivo.close();

	
}
main()
{
	gotoxy(10,5); printf("Coloca el nombre del jugador 1: "); gets(j1);
	gotoxy(10,6); printf("Coloca el nombre del jugador 2: "); gets(j2);
	
	while (op!=2)
	{
		system("cls");
		inicial();
		despliega();
		juego();
	}
	
	gotoxy(10,10); printf("El numero de juegos es: %d",cont);
	gotoxy(10,11); printf("El numero de partidas ganadas por %s es: %d",j1,cj1);
	gotoxy(10,12); printf("El numero de partidas ganadas por %s es: %d",j2,cj2);
	gotoxy(10,13); printf("El numero de juegos en empate (GATO) es: %d",cg);
	
	getche();
		
}

