#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include "mi_libreria.cpp"

int a[8][8],errores,aciertos;

void inicial()
{
	for(int i=0;i<=7;i++) for(int j=0;j<=7;j++) a[j][i]=0;
	a[0][0]=1; a[1][0]=1;
	a[0][5]=1; a[0][6]=1; a[0][7]=1;
	a[4][6]=1; a[5][6]=1; a[6][6]=1; a[7][6]=1;
}

void despliega()
{
	system("cls");
	cuadro(3,4,8,8);
	for(int i=0;i<=7;i++)
	{
		gotoxy(6+i*6,3); printf("%d",i);
		gotoxy(1,5+i*2); printf("%d",i);
		for(int j=0;j<=7;j++)
		{
			gotoxy(6+j*6,5+i*2);
			if((a[j][i]==0)||(a[j][i]==1)) printf(" ");
			if(a[j][i]==2) printf("X");
			if(a[j][i]==3) printf("A");		
		}
	}
	gotoxy(55,5); printf("ERRORES -->  %d      Aciertos --> %d",errores,aciertos);
}

void juego()
{
	int col,ren;
	while((errores<10)&&(aciertos<9))
	{
		col=8;
		while((col<0)||(col>7))
		{
			gotoxy(55,7); printf("                                                ");
			gotoxy(55,7); printf("Indica la columna de tiro --> "); scanf("%d",&col);
			if((col<0)||(col>7))
			{
				gotoxy(55,19); printf(" Error, columna fuera de rango de 0 a 7 . .");
				getche();
				gotoxy(55,19); printf("                                           ");
			}
		}
		
		ren=8;
		while((ren<0)||(ren>7))
		{
			gotoxy(55,9); printf("                                               ");
			gotoxy(55,9); printf("Indica el renglon de tiro --> "); scanf("%d",&ren);
			if((ren<0)||(ren>7))
			{
				gotoxy(55,19); printf(" Error,renglon fuera de rango de 0 a 7 . .");
				getche();
				gotoxy(55,19); printf("                                          ");
			}
		}
		
		if((a[col][ren]==2)||(a[col][ren]==3))
		{
			gotoxy(55,23); printf("Error, cela con tiro anterior . . .");
			getche();
			gotoxy(55,23); printf("                                   ");
		}
		else
		{
			if(a[col][ren]==0)
			{
				a[col][ren]=2;
				errores++;
			}
			else
			{
				a[col][ren]=3;
				aciertos++;
			}
		}
		despliega();
	}
	gotoxy(55,19);
	if(errores==10) printf("PELAS !! HAS AGOTADO TUS INTENTOS");
	else printf("Eres una estaca cafe, has ganado");
	getche();
}

main()
{
	inicial();
	despliega();
	juego();
	getche();
}

