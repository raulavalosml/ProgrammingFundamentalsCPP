//Elabore un programa que solicite dos valores enteros a y b, 
//debe validar que los valores estén entre 1 y 100, posteriormente debe mostrar los múltiplos de 7 entre a y b (incluidos).
# include <stdio.h>
# include <conio.h>

int a,b,ai,bi;

main()
{
	a=0;
	while ((a>100)||(a<1))
	{
		printf("Coloque el valor de a: "); scanf("%d",&a);
		
		if ((a>100)||(a<1))
		{
			printf("Error, el rango va de 1 a 100\n");
			getche();
		}
	}

	b=0;
	while ((b>100)||(b<1))
	{
		printf("Coloque el valor de b: "); scanf("%d",&b);
		
		if ((b>100)||(b<1))
		{
			printf("Error, el rango va de 1 a 100\n");
			getche();
		}
	}
	
	ai=a;
	bi=b;
	
	if (a>b)
	{
		printf("Los multiplos de 7 entre %d y %d son: ",b,a);
	}	
	else 
	{
		printf("Los multiplos de 7 entre %d y %d son: ",a,b);
	}
	
	for (b;b<=a;b++)
		{
			if (b%7==0)
			{
				printf("%d, ",b);
			}
		}	

		
	
	for (a;a<=b;a++)
		{
			if (a%7==0)
			{
				printf("%d, ",a);
			}
		}	
	
	getche();
}
