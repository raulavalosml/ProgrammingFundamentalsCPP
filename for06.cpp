# include <stdio.h>
# include <conio.h>

long int x,y,c,cont;

main()
{
	x=1;
	y=2;
	while (x+10>y)
	{
		
		x=0;
		while ((x>1000)||(x<1))
		{
			printf("Coloca el valor de X: "); scanf("%d",&x);
			if ((x>1000)||(x<1))
			{
				printf("Error, el rango va de 1 a 100\n");
				getche();
			}
		}
		printf("Valor Correcto\n");
		getche();
		
		y=0;
		while ((y>1000)||(y<1))
		{
			printf("Coloca el valor de Y: "); scanf("%d",&y);
			if ((y>1000)||(y<1))
			{
			
				printf("Error, el rango va de 1 a 100\n");
				getche();
			}
		}
		printf("Valor Correcto\n");
		getche();
		
		if (x+10>y)
		{
			printf("Error, y debe de ser minimo 10 unidades mayor que x\n");
			getche();
		}
		else 
		{
			printf("Ambos valores son correctos");
			getche();
		}
	}
	

while (y>=x)
{

	c=y-1;	
	cont=0;
	for (c;c>=2;c--)
	{
		
		if (y%c==0)
		{
			cont++;
		}
	}
	
	if(cont==0)
			{
				printf("%d, ",y);
			}
		y--;
}
}
