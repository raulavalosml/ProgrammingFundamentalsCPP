# include <stdio.h>
# include <conio.h>

int n,c,cont_divi;

main()
{
	n=0;
	while ((n>1000)||(n<1))
	{
		printf("Coloque el valor de N: "); scanf("%d",&n);
		
		if ((n>1000)||(n<1))
		{
			printf("Error en el rango de N, va de 1 a 1000");
		}
	}
	
	c=n-1;
	cont_divi=0;
	
	while (c>=2)
	{
		if (n%c==0)
		{
			cont_divi++;
		}
		c--;
	}
	
	if (cont_divi==0)
	{
		printf("El valor si es primo");
	}
	else 
	{
		printf("El valor no es primo");
	}
	
	
}
