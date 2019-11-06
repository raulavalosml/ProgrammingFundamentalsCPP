# include <conio.h>
# include <stdio.h>

int x,y,c;

main()
{
	x=0;
	y=0;
	while ((x>10)||(x<1))
	{
		printf("Coloque el valor de x: "); scanf("%d",&x);
		if ((x>10)||(x<1)) printf("Error, el valor de x debe ser entre 1 y 10\n");
	}
	
	while ((y<40)||(y>50))
	{
		printf("Coloque el valor de y: "); scanf("%d",&y);
		if ((y<40)||(y>50)) printf("Error, el valor de y debe ser entre 40 y 50\n");	
	}	
	
	c=x;
	while (c<=y)
	{
		if (c%2==0) 
		{
			printf("%d\n",c);
		}
		c++;
	}
}
