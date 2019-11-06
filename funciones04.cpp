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


void pide_datos()
{
	int x,y,op;
	x=0;
	while ((x>1000)||(x<1))
	{
		gotoxy(10,13); printf("Coloca el valor de x: "); scanf("%d",&x);
		if ((x>1000)||(x<1))
		{
			gotoxy(10,14); printf("Error, el rango va de 1 a 1000...[ENTER] para continuar...");
			getche();
			gotoxy(10,14); printf("                                                          ");
		}
	}
	gotoxy(10,14); printf("Valor correcto...[ENTER] para continuar...");
	getche();
	gotoxy(10,14); printf("                                          ");
	
	if(op==2)
	{
		y=0;
		while ((y>10)||(y<1))
		{
			gotoxy(10,15); printf("Coloca el valor de y: "); scanf("%d",&y);
			if ((y>10)||(y<1))
			{
				gotoxy(10,16); printf("Error, el rango va de 1 a 10...[ENTER] para continuar...");
				getche();
				gotoxy(10,16); printf("                                                          ");
			}
		}
		gotoxy(10,16); printf("Valor correcto...[ENTER] para continuar...");
		getche();
		gotoxy(10,16); printf("                                          ");
	}
	
	
}



void menu(int op=0)
{
	while (op!=3)
	{
		gotoxy(10,5);  printf("Menu Principal");
		gotoxy(10,6);  printf("1) Factorial");
		gotoxy(10,7);  printf("2) Evaluar a una potencia");
		gotoxy(10,8);  printf("3) Terminar");
		
		gotoxy(10,10); printf("Coloca la opcion deseada: "); scanf("%d",&op);
		
		if ((op>3)||(op<1))
		{
			gotoxy (10,11); printf("Error, el rango va de 1 a 3...[ENTER] para continuar...");
			getche();
			gotoxy (10,11); printf("                                                       ");
			gotoxy (10,10); printf("                                                       ");
		}
		
		if ((op==2)||(op==1))
		{
			gotoxy(10,11); printf("Opcion aceptada...[ENTER] para continuar...");
			getche();
			gotoxy(10,11); printf("                                           ");
			gotoxy (10,10); printf("                                                       ");
			pide_datos();
		
		}
	}
}



void factorial()
{
	int x,y,op,c,f;

	//realizar operacion
	c=x;
	f=1;
	for (c;c>=1;c--)
	{
		f=f*c;
	}
	gotoxy(10,19); printf("El factorial de %d es: %d",x,f);
}

void potencia()
{
	pide_datos();
	//realizar operacion
}


main()
{
	int x,y,f,op,p;

	menu();
	
	if (op==1)
		{
			
			factorial();
		}
			
		if (op==2)
		{
			//potencia();
		}
	
	
	gotoxy(10,20); printf("[ENTER] para fin de programa...");
	getche();
}
