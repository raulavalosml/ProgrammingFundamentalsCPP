# include <stdio.h>
# include <conio.h>

long int x,f,xi;

main()
{
	x=0;
	while ((x>20)||(x<1))
	{
		printf("Coloca el valor deseado: "); scanf("%d",&x);
		if ((x>20)||(x<1))
		{
			printf("Error, el rango va de 1 a 20\n");
		}
	}
	printf("Valor Correcto\n");
	getche();
	
	f=1;
	xi=x;
	printf("Los valores del factorial son: \n");
	for(x;x>=1;x--)
	{
		printf("%d, ",x);
		f=f*x;
	}
	
	printf("El valor del factorial de %d es %d.",xi,f);
	getche();
}
