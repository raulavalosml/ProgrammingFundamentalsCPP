# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,s,c,y;

main()
{
	printf("Coloque el valor de x: "); scanf("%d",&x);

	c=x;
	s=1;
	while (c>=1)
	{
		s=s*c;
		c=c-1;
	}
	printf("%d",s);
	getche();	
}
