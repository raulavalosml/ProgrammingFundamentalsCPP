# include <stdio.h>
# include <conio.h>

int x,y,c;
float s,alfa,f;

main()
{
	x=0;
	y=0;
	while (y<=x)
	{
		x=0;
		while ((x>10)||(x<1))
		{
			printf("Coloca el valor de x: "); scanf("%d",&x);
			
			if ((x>10)||(x<1))
			{
				printf("Error, el rango va de 1 a 10...\n");
				getche();
			}
		}
		printf("Valor correcto...\n");
		
		y=0;
		while ((y>11)||(y<2))
		{
			printf("Coloca el valor de y: "); scanf("%d",&y);
			
			if ((y>11)||(y<2))
			{
				printf("Error, el rango va de 2 a 11...\n");
				getche();	
			}	
		}	
		printf("Valor correcto...\n");
		
		if (y<=x)
		{
			printf("Error, y debe de ser mayor que x\n");
			getche();
		}
		else
		{
			printf("Ambos valores son correctos\n");
		}
	}
	
	c=x;
	printf("Los valores enteros entre %d y %d son: \n",x,y);
	while (c<=y)
	{
		printf("%d, ",c);
		c++;
	}
	
	c=x;
	f=0;
	while (c<=y)
	{
		s=c-1;
		alfa=((c)*(s))/(c*c);
		f=f+alfa;
		c++;
	}
	printf("\nLa sumatoria de la f%crmula alfa es: %f",162,f);
	
	
}
