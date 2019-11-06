# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int c,x,y;

main()
{
	printf("Coloque el valor de x: "); scanf("%d",&x);
	printf("Coloque el valor de y: "); scanf("%d",&y);
	c=x;
	while (c<=y)
	{
		if(c%2==0) printf("%d\n",c);
		c++;
	} 
	getche();
}
