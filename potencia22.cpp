# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,s,c,y,p;

main()
{
	printf("Coloque el valor de x: "); scanf("%d",&x);
	printf("Coloque el valor de y: "); scanf("%d",&y);
	
	c=1;
	p=1;
	while (c<=y)
	{
		p=p*x;
		c++;
	}
	
	printf("La potencia de %d a la %d es %d",x,y,p);
}
