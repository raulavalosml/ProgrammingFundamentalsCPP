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

void error()
{
	printf("Error en el valor dado, rango va de 1 a 10...\n");
}

void pide_datos()
{
	int x,c;
	x=0;
	
	while ((x>10)||(x<1))
	{
		printf("Coloca el valor de x: "); scanf("%d",&x);
		
		if ((x>10)||(x<1))
		{
			error();
			getche();
		}
	}
	printf("Valor correcto...\n");
	c=x;
}

void factorial(int valor)
{
	int x,c;
		
	for(c;c>=1;c--)
	{
		valor=valor*c;
	}
	
	printf("El factorial de %d es: %d\n",x,valor);
	getche();
		
}

main()
{
	pide_datos();
	getche();
	factorial(1);
	getche();
}
