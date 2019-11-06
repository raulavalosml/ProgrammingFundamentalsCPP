#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way ??
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
# include <math.h>
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <String.h>

int op;
char cuenta[5],falso[5];

void altas()
{
	gets(falso);
	system("cls");
	gotoxy(10,5)  printf("Coloca el numero de cuenta: ");
	gets(cuenta);
	
}

void menu()
{
	system("cls");
	gotoxy(10,5)  printf("1)Altas de clientes");
	gotoxy(10,6)  printf("2)Consulta de clientes por numero de cuenta");
	gotoxy(10,7)  printf("3)Consulta de clientes por RFC");
	gotoxy(10,8)  printf("4)Listado de clientes por apellido paterno");
	gotoxy(10,9)  printf("5)Reporte de saldos acumulados de la institucion");
	gotoxy(10,10) printf("6)Reporte de saldos por sucursal");
	gotoxy(10,11) printf("7)Consulta de una sucursal por clave");
	gotoxy(10,12) printf("8)Listado de sucrsales");
	gotoxy(10,13) printf("9)Terminar");
	gotoxy(10,15) printf("Selecciona la opcion a ejecutar: "); scanf("%d",&op);
	
	if ((op>9)||(op<1))
	{
		system("cls");
		gotoxy(10,20) printf("Opcion fuera de rango, va de 1 a 9...");
		getche();
	}
	else
	{
		if (op==1) altas();
	}
		
}

main()
{
	while (op!=9)
	{
		menu();	
	}
	
	
}
