# include <stdio.h>
# include <conio.h>

int x,y,c;

main()
{
	x=0; y=0;
	
	while (y<=x)
	{
		x=0;
		while ((x<1)||(x>1000))
		{
			printf("Coloque el valor de X: "); scanf("%d",&x);
			
			if ((x<1)||(x>1000))
			{
				printf("Error en el rango, va de 1 a 1000\n");
				getche();
			}
		}
		
		y=0;
		while ((y<1)||(y>1000))
		{
			printf("Coloque el valor de Y: "); scanf("%d",&y);
			
			if ((y<1)||(y>1000))
			{
				printf("Error en el rango, va de 1 a 1000\n");
				getche();
			}
		}
		
		if (y<=x)
		{
			printf("El valor de Y tiene que ser mayor a X\n");
			getche();
		}
	}
	
		
		
	c=y;
	while (c>=x)
	{
		if (c%2!=0); printf("%d\n",c);
		c--;
	}
	getche();
}
