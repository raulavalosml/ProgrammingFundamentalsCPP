# include <stdio.h>
# include <conio.h>

long int x,y,p,c;

main()
{
	x=0;
	while ((x>20)||(x<1))
	{
		printf("Coloca el valor de X: "); scanf("%d",&x);
		if ((x>20)||(x<1))
		{
			printf("Error, el rango va de 1 a 20\n");
		}
	}
	printf("Valor Correcto\n");
	getche();
	
	y=0;
	while ((y>20)||(y<1))
	{
		printf("Coloca el valor de Y: "); scanf("%d",&y);
		if ((y>20)||(y<1))
		{
			printf("Error, el rango va de 1 a 20\n");
		}
	}
	printf("Valor Correcto\n");
	getche();
	
	c=1;
	p=1;
	for (c;c<=y;c++)
	{
		p=p*x;
	}
	printf("El valor de %d a la %d es: %d",x,y,p);
	getche();
	
}
