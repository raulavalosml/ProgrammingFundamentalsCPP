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

float in,dinero_fin;

float inicial()
{	system("cls");
	printf("Coloque la cantidad inicial: "); scanf("%f",&in);
	return(in);
}

float abonar()
{
	float ab;
	system("cls");
	printf("Coloque la cantidad a abonar: "); scanf("%f",&ab);
	return(ab);
}

float retirar()
{
	float re;
	system("cls");
	printf("Coloque la cantidad a retirar: "); scanf("%f",&re);
	return(re);
}

float invertir()
{
	float me,ta,tain,tap,nuevo_c;
	system("cls");
	printf("Coloca el numero de meses a invertir: "); scanf("%f",&me);
	printf("Coloca la taza de interes anual en porcentaje: "); scanf("%f",&ta);
	printf("Coloca la cantidad de dinero a invertir: "); scanf("%f",&tain);
	
	tap=ta/100;
	nuevo_c=((tap/12)*tain)*me;
	printf("La nueva cantidad a invertir segun la formula es: %.4f",nuevo_c);
	return(nuevo_c);
}

void menu()
{
	char op;
	float dinero_in,dinero_ab,dinero_re,dinero_t;
	while (op!='e')
	{
		system("cls");
		printf("a) Colocar capital inicial\n");
		printf("b) Abonar a capital\n");
		printf("c) Retirar a capital\n");
		printf("d) Invertir un plazo\n");
		printf("e) Terminar\n");
		printf("Seleccione la opcion deseada: "); op=getche();
		
		if ((op>'e') || (op<'a') && (op!='e'))
		{
			printf("Error, el rango va de a hasta e");
			getche();
		}
		else 
		{
			if(op=='a')
			{
				dinero_in=inicial();
				dinero_fin=dinero_in;
			}
			if(op=='b') 
			{
				dinero_ab=abonar();
				dinero_fin=dinero_fin+dinero_ab;
			}
			if(op=='c') 
			{
				dinero_re=retirar();
				dinero_fin=dinero_fin-dinero_re;
			}
			if(op=='d')
			{
				dinero_t=invertir();
				dinero_fin=dinero_fin+dinero_t;
			}
		}
	}
	printf("\nEl dinero final en la empresa es de: %.2f",dinero_fin);	
}

main()
{
	menu();
}
