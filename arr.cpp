#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int a[10];

void captura()
{
	for(int i=0;i<=9;i++)
	{
		printf("Coloca el valor de la posicion %d: ", i); 
		scanf("%d",&a[i]);
		
		if ((a[i]>1000) || (a[i]<1))
		{
			printf("\nError, valor fuera de rango entre 1 y 1000...\n");
			getche();
			i--;
		}
	}
}

void promedio()
{
	int s=0;
	float prom;
	for(int i=0;i<=9;i++)
	{
		s=s+a[i];
	}
	prom=float(s)/10;
	system("cls");
	printf("El promedio de los valores es: %.2f",prom);
	getche();
}

void mayor()
{
	int i,may;
	may=a[0];
	for(i=1;i<=9;i++)
	{
		if (a[i]>may)
		{
			may=a[i];
		}
	}
	printf("\nEl valor mayor del arreglo es: %d",may);
	getche();
}

void menor()
{
	int i,men;
	men=a[0];
	for(i=1;i<=9;i++)
	{
		if (a[i]<men)
		{
			men=a[i];
		}
	}
	printf("\nEl valor menor del arreglo es: %d",men);
	getche();
}

void lista()
{
	for (int i=0;i<=9;i++)
	{
		printf("\nEl valor de la posicion %d es: %d",i,a[i]);
	}
	getche();
}

void invertida()
{
	for (int i=9;i>=0;i--)
	{
		printf("\nEl valor de la posicion %d es: %d",i,a[i]);
	}
	getche();
}

void posicion()
{
	int x;
	printf("\nColoca el valor de la posici%cn deseada: ",162); scanf("%d",&x);
	printf("El valor de la posici%cn %d es: %d",162,x,a[x]);
	getche();
}

void menu()
{
	char op;
	while (op!='g')
	{
		system("cls");
		printf("a) Promedio\n");
		printf("b) Mayor de la lista\n");
		printf("c) Menor de la lista\n");
		printf("d) Lista de secuencia\n");	
		printf("e) Lista invertida\n");
		printf("f) Valor de posici%cn\n",162);
		printf("g) Terminar\n");
		printf("Indica la opci%cn : ",162); 
		op=getche();
		
		if ((op<'a')||(op>'g'))
		{
			printf("Error, valor fuera de rango entre -> a <- y -> g <- ...");
			getche();
		}
		else
		{
			if(op=='a') promedio();	
			if(op=='b') mayor();
			if(op=='c') menor();
			if(op=='d') lista();
			if(op=='e') invertida();
			if(op=='f') posicion();
		}
		
	}	
}

main()
{
	captura();
	menu();
	getche();
}
