# include <conio.h>
# include <stdio.h>

int x,y;

main()
{
	x=0;
	while ((x>10)||(x<1))
	{
		printf("Coloca el valor de x: "); scanf("%d",&x);
		
		if ((x>10)||(x<1))
		{
			printf("Error, el rango va de 1 a 10\n");
			getche();
		}
	}
	
	y=0;
	while ((y>50)||(y<40))
	{
		printf("Coloca el valor de y: "); scanf("%d",&y);
		
		if ((y>50)||(y<40))
		{
			printf("Error, el rango va de 40 a 50\n");
			getche();
		}
	}
	
	while (x<=y)
	{
		if (x%2==0)
		{
			printf("%d\n",x);	
		}
		x++;
	}
	getche();
}
