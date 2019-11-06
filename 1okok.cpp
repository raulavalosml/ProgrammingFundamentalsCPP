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

int op,x;
char cuenta[5]; 


void altas()
{
	x=0;
	while((x>20)||(x<5))
	{
		system("cls");
		printf("Coloca la palabra: "); gets(cuenta);
		
		x=strlen(cuenta);
		if ((x>20) || (x<5))
		{
			printf("Error, debe de tener entre 5 y 20 caracteres...\n");
			getche();
		}
	}
	
	
}

void menu()
{
	gotoxy(10,5);  printf("1) Altas de clientes");
	gotoxy(10,6);  printf("2) Consulta de clientes por cuenta");
	gotoxy(10,7);  printf("3) Consulta de clientes por RFC");
	gotoxy(10,8);  printf("4) Listado de clientes por apellido paterno");
	gotoxy(10,9);  printf("5) Reporte acumulado de saldos de la instituci%cn",162);
	gotoxy(10,10); printf("6) Reporte acumulado de saldos de una sucursal");
	gotoxy(10,11); printf("7) Consulta de sucursales por clave");
	gotoxy(10,12); printf("8) Listar todas las sucursales");
	gotoxy(10,13); printf("9) Terminar");
	gotoxy(10,15); printf("Seleccione una opci%cn: ",162); scanf("%d",&op);

	if (op==1) altas();
//	if (op==2) consulta_cuenta();
//	if (op==3) consulta_rfc();
//	if (op==4) lista_apellido();
//	if (op==5) saldo_institucion();
//	if (op==6) saldo_sucursal();
//	if (op==7) consulta_sucursal_clave();
//	if (op==8) listar_sucursales();
	if ((op>9)||(op<1))
	{
		system("cls");
		gotoxy(10,20); printf("Error, el rango de opciones va de 1 a 9...");
		getche();
		gotoxy(10,20); printf("                                          ");
	}		
}

main()
{
	op=0;
	while(op!=9)
	{
		system("cls");
		menu();

	}

}
