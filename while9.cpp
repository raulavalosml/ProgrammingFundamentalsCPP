# include <stdio.h>
# include <conio.h>
# include <windows.h>

int x,y,c,p;

main()
{
	x=0;
	while ((x>10)||(x<1))
	{
		printf("Coloque el primer valor: "); scanf("%d",&x);
		
		if ((x<1)||(x>10))
		{
		printf("Error, el rango es de 1 a 10\n");	
		getche();
		}	
	}	

	y=0;
	while ((y>10)||(y<1))
	{
		printf("Coloque el segundo valor: "); scanf("%d",&y);
		
		if ((y<1)||(y>10))
		{
		printf("Error, el rango es de 1 a 10\n");	
		getche();
		}	
	}
	
	c=1;
	p=1;
	
	while ((c<=y))
	{
		p=p*x;
		c++;
	}
	
	printf("El valoe de %d elevado a la potencia %d es: %d", x,y,p);
}
