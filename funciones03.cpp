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

void limpia()
{
	gotoxy(10,15); printf("                                                                         ");
	gotoxy(10,16); printf("                                                                         ");
	gotoxy(10,17); printf("                                                                         ");
	gotoxy(10,18); printf("                                                                         ");
	gotoxy(10,19); printf("                                                                         ");
	gotoxy(10,20); printf("                                                                         ");
	gotoxy(10,21); printf("                                                                         ");
	gotoxy(10,22); printf("                                                                         ");
	gotoxy(10,23); printf("                                                                         ");
	gotoxy(10,24); printf("                                                                         ");
}

void limpia_menu()
{
	int op;
	
	gotoxy(10,5);  printf("                             ");
	gotoxy(10,6);  printf("                             ");
	gotoxy(10,7);  printf("                             ");
	gotoxy(10,8);  printf("                             ");
	gotoxy(10,9);  printf("                             ");
	gotoxy(10,10); printf("                             ");

	gotoxy(10,12); printf("                             ");	
	
}

void error()
{
	gotoxy(10,13); printf("Error el rango va de 1 a 5 [ENTER] para continuar...");
	getche();
	gotoxy(10,13); printf("                                                      ");
	gotoxy(35,12); printf("                                                      ");
}

void correcto()
{
	gotoxy(10,13); printf("Opcion aceptada [ENTER] para continuar...");
	getche();
	gotoxy(10,13); printf("                                                      ");
	gotoxy(35,12); printf("     ");
}

void pide_datos()
{
	int op,x,y,r;
		x=0;
		while ((x>1000)||(x<1))
		{
			gotoxy(10,15); printf("Coloca el primer valor: "); scanf("%d",&x);
			if ((x>1000)||(x<1))
			{
				gotoxy(10,16); printf("Error, el rango va de 1 a 1000...[ENTER] para continuar...");
				getche();
				gotoxy(10,16); printf("                                                          ");
				gotoxy(10,15); printf("                                                          ");
			}
		}
		gotoxy(10,16); printf("Primer valor: %d es correcto [ENTER] para continuar...",x);
		getche();
		gotoxy(10,16); printf("                                                      ");
		gotoxy(10,38); printf("                                                          ");
		
		
		y=0;
		while ((y>1000)||(y<1))
		{
			gotoxy(10,17); printf("Coloca el segundo valor: "); scanf("%d",&y);
			if ((y>1000)||(y<1))
			{
				gotoxy(10,18); printf("Error, el rango va de 1 a 1000...[ENTER] para continuar...");
				getche();
				gotoxy(10,18); printf("                                                          ");
				gotoxy(10,17); printf("                                                          ");
			}
		}
		gotoxy(10,18); printf("Segundo valor: %d correcto [ENTER] para continuar...",y);
		getche();
		gotoxy(10,38); printf("                                                          ");
		gotoxy(10,18); printf("                                                          ");	
}

void suma()
{	
	int x,y,r,op;
	r=x+y;
	gotoxy(10,20); printf("La suma de %d mas %d es: %d",x,y,r);
}

void resta()
{	
	int x,y,r,op;
	r=x-y;
	gotoxy(10,20); printf("La resta de %d menos %d es: %d",x,y,r);
}

void multiplicacion()
{	
	int x,y,r,op;
	r=x*y;
	gotoxy(10,20); printf("La multiplicacion de %d por %d es: %d",x,y,r);
}

void division()
{	
	int op,x,y;
	float r;
	r=x/y;
	gotoxy(10,20); printf("La division de %d sobre %d es: %f",x,y,r);
}

void menu()
{
	int op;
	op=0;
	while (op!=5)
	{
		gotoxy(10,5);  printf("Menu Inicial\n");
		gotoxy(10,6);  printf("1) Suma\n");
		gotoxy(10,7);  printf("2) Resta\n");
		gotoxy(10,8);  printf("3) Multiplicacion\n");
		gotoxy(10,9);  printf("4) Division\n");
		gotoxy(10,10); printf("5) Terminar\n");

		gotoxy(10,12); printf("Coloca la opcion deseada: "); scanf("%d",&op);
		
		if((op>5)||(op<1))
		{	
			error();
			
		}
		if((op==1)||(op==2)||(op==3)||(op==4)) 
		{
			correcto();
			limpia_menu();
			pide_datos();
			if (op==1)
			{
				suma();
				gotoxy(10,21); printf("Para volver al menu presiona [ENTER]...");
				getche();
				limpia();
			}
			
			if (op==2)
			{
				resta();
				gotoxy(10,21); printf("Para volver al menu presiona [ENTER]...");
				getche();
				limpia();
			}
			
			if (op==3) 
			{
				multiplicacion();
				gotoxy(10,21); printf("Para volver al menu presiona [ENTER]...");
				getche();
				limpia();
			}
			
			if (op==4)
			{
				division();
				gotoxy(10,21); printf("Para volver al menu presiona [ENTER]...");
				getche();
				limpia();
			}
		}
	}	
}

main()
{
	menu();
	getche();
	
}
