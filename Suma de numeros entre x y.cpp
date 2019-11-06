# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,s,c,y;

main()
{
	printf("Coloque el valor de x: "); scanf("%d",&x);
	printf("Coloque el valor de y: "); scanf("%d",&y);
	
	c=x;
	while (c<=y)
	{
		s=s+c;
		c++;
	}
	printf("%d\n",s); 
	getche();
}
