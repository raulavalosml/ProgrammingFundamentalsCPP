#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int a[10];

void pide_datos()
{
	system("cls");
	for(int i=0;i<=9;i++)
	{
		printf("Coloca el valor de la posicion %d: ",i); scanf("%d",&a[i]);
		if ((a[i]>1000) || (a[i]<1))
		{
			printf("ERROR, el rango va de 1 a mil...\n");
			getche();
			i--;				
		}
	}
	
}

void lista()
{
	system("cls");
	printf("Lista en orden de captura\n");
	for(int i=0;i<=9;i++)
	{
		printf("El valor de la posicion %d es: %d\n",i,a[i]);	
	}	
	getche();
}

void inversa()
{
	system("cls");
	printf("Lista Inversa al orden de captura\n");
	for(int i=9;i>=0;i--)
	{
		printf("El valor de la posicion %d es: %d\n",i,a[i]);
	}
	getche();
}

void posicion()
{
	int i;
	system("cls");
	printf("Ver el valor de una posicion determinada\n");
	printf("Coloque la posicion deseada: "); scanf("%d",&i);
	printf("El valor de la posicion %d es: %d",i,a[i]);
	getche();
}

void mayor()
{
	system("cls");
	int i,may=a[0];
	
	for (i=1;i<=9;i++)
	{
		if (a[i]>may)
		{
			may=a[i];
		}
	}
	printf("El valor mayor del arreglo es: %d",may);
	getche();
}

void el_menor()
{
	system("cls");
	int j,men=a[0];
	
	for(j=1;j<=9;j++)
	{
		if ((a[j]<men) &&(a[j]>0))
		{
			men=a[j];
		}
	}
	printf("El valor menor del arreglo es: %d",men);
	getche();
}

void promedio()
{
	system("cls");
	printf("Promedio");
	int i;
	float s,prom;
	s=0;
	for(i=0;i<=9;i++)
	{
		s=s+a[i];
	}
	prom=s/10;
	printf("El promedio de los 10 valores es: %.4f",prom);
	getche();
}

void menu()
{
	char op;
	
	while (op!='h')
	{
		
		system("cls");
		printf("g) Pide datos\n");
		printf("a) Promedio\n");
		printf("b) Numero mayor\n");
		printf("c) Numero menor\n");
		printf("d) Lista de orden de captura\n");
		printf("e) Lista Inversa\n");
		printf("f) Ver el valor de una posicion determinada\n");
		printf("h) Terminar\n");
		printf("Coloque la opcion deseada: "); op=getche();
		
		if ((op>'h') || (op<'a'))
		{
			printf("ERROR, las opciones van de a hasta g");
			getche();
		}
		else
		{
			if(op=='a') promedio();
			if(op=='b') mayor();
			if(op=='c') el_menor();
			if(op=='d') lista();
			if(op=='e') inversa();
			if(op=='f') posicion();
			if(op=='g') pide_datos();
		}
	}
}

main()
{
	menu();
}
