#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int factorial()
{
	int n,s=1;
	system("cls");
	printf("OBTENIENDO EL FACTORIAL\n\n");
	printf("Coloque el valor de n: "); scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("\nEl factorial del numero %d es: %d",n,s);
	getche();
}

void potencia()
{
	int x,y,r;
	system("cls");
	printf("OBTENIENDO POTENCIA\n\n");
	printf("Coloque el valor de x: "); scanf("%d",&x);
	printf("Coloque el valor al cual elevar x: "); scanf("%d",&y);
	r=pow(x,y);
	printf("La potencia de %d a la %d es: %d",x,y,r);
	getche();
}

void menu()
{
	char op;
	
	while (op!='c')
	{
		system("cls");
		printf("a. Factorial\n");
		printf("b. Elevar a potencia\n");
		printf("c. Terminar\n");
		printf("Seleccione la opcion deseada:"); op=getche();
		
		if ((op<'a') || (op>'b') && (op!='c'))
		{
			printf("\nError, valor fuera de rango...\n");
			getche();
		}
		else
		{
			if (op=='a') factorial();
			if (op=='b') potencia();
		}
	}
}

main()
{
	menu();
}
