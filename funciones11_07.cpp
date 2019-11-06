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

int cl2,cl25,t,m2,m25,r2,r25,op,p2,p25;

void error(int err)
{
	if (err==1) printf("Error, el tipo de material es 1 o 2...\n");
	if (err==2) printf("Error, solo hay opcion 1 y 2 para el menu...\n");
	getche();
}

int pide_tipo()
{
	system("cls");
	printf("1) Ressitencia 200 ($1,200 el metro cubico)\n");
	printf("2) Ressitencia 250 ($1,450 el metro cubico)\n");

	t=0;

	while ((t>2) || (t<1))
	{
		printf("Seleccione la opcion deseada: "); scanf("%d",&t);
		if ((t>2) || (t<1))
		{
			error(1);
		}
	}

}

int precio_200(int s)
{
	p2=s*1200;
}

int precio_250(int r)
{
	p25=r*1450;
}

int suma_200(int a)
{
	r2=r2+a;
	precio_200(r2);
}

int suma_250(int b)
{
	r25=r25+b;
	precio_250(r25);
}

int pide_200()
{
	printf("Coloca la cantidad de metros de resistencia 200: "); scanf("%d",&m2);
	suma_200(m2);
}

int pide_250()
{
	printf("Coloca la cantidad de metros de resistencia 250: "); scanf("%d",&m25);
	suma_250(m25);
}



muestra()
{
	system("cls");
	printf("\n\nResultados de material vendido:\n\n");
	printf("Tipo  Resistencia    Clientes       Consumo en m3           Consumo en $$\n");
	printf(" 1     200               %d               %d                        %d\n",cl2,r2,p2);
	printf(" 2     250               %d               %d                        %d\n",cl25,r25,p25);
	
	//	printf("El valor de la suma de 200 es: %d\n",r2);
	//printf("El valor de la suma de 200 es: %d\n",r25);
}

main()
{
	op=0;
	while (op!=2)
	{
		printf("1) Continuar compras...\n");
		printf("2) Terminar...\n");
		printf("Coloque la opcion deseada: "); scanf("%d",&op);
		
		if(op==1)
		{
				
			pide_tipo();
			if (t==1) 
			{
				cl2++;
				pide_200();
			}
			if (t==2)
			{
				cl25++;
				pide_250();
			}
			getche();
		}
		
		if ((op>2) || (op<1))
		{
			error(2);
		}
	}
	muestra();
}
