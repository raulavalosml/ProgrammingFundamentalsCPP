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

int a[10],aux[10];

int n=10;

void error(int err)
{
	if (err==1) printf("Error, el rango va de 1 a mil...\n");
}

void pide_datos()
{
	for(int i=0;i<=9;i++)
	{
		printf("Coloca el valor de la posicion %d: ",i); scanf("%d",&a[i]);
		if ((a[i]>1000) || (a[i]<1))
		{
			error(1);
			getche();
			i--;
		}
	}
}

void captura()
{	
	
	printf("Captura\n");
	for (int i=0;i<=9;i++)
	{
		printf("%d\n",a[i]);
	}
	
	getche();
}

void ordena()
{
	int ayuda;
	
	for(int i=0; i<n;i++) aux[i]=a[i];
	
	for(int i=0; i<n;i++)
	{
		for(int j=i+1; j<n;j++)
		{
			if (aux[i]>aux[j])
			{
				ayuda=aux[i];
				aux[i]=aux[j];
				aux[j]=ayuda;
			}
		}
	}
	printf("\nValores Ordenados\n");
	for (int i=0;i<n;i++)
	{
		printf("%d\n",aux[i]);
	}
	getche();
}

main()
{
	pide_datos();
	captura();
	ordena();
}
