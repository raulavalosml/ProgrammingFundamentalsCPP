# include <stdio.h>
# include <conio.h>

int x,n;

main()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("Coloca el valor de x: "); scanf("%d",&x);
		
		if ((x>100)||(x<1))
		{
			printf("Error, el rango de x va de 1 a 100");
			getche();
		}
	}
	printf("Valor correcto");
	
	n=0;
	
	while (n<=x)
	{
		printf("%d\n",n);
		n++;
	}
	
}
