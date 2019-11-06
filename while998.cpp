# include <conio.h>
# include <stdio.h>

int x,y,c,cont,d;

main()
{
	x=0;
	y=0;
	while (y<x+10)
	{
		x=0;
		while ((x>1000)||(x<1))
		{
			printf("Coloca el valor de X: "); scanf("%d",&x);
			
			if ((x>1000)||(x<1))
			{
				printf("Error del rango de X, va de 1 a 1000\n");
			}
		}
	
		y=0;
		while ((y>1000)||(y<1))
		{
			printf("Coloca el valor de Y: "); scanf("%d",&y);
			
			if ((y>1000)||(y<1))
			{
				printf("Error del rango de Y, va de 1 a 1000\n");
			}
		}
		
		if (y<x+10)
		{
			printf("Error, y debe de ser mayor por 10 unidades que x\n");
		}	
	}

	
	
while (y>=x)

{ 
	cont=0;
	c=y-1;
	while (c>=2)
	{
		
		if(y%c==0)
		{
			cont++;
		}
		c--;
	}
	
	if (cont==0)
	{
		printf("%d\n",y);
	}
	y--;
	
}
	
}
	

	


	
	


