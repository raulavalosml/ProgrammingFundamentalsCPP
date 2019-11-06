# include <conio.h>
# include <stdio.h>

int x,y;

main()
{
	printf("Coloque el valor de x: "); scanf("%d",&x);
	printf("Coloque el valor de y: "); scanf("%d",&y);
	
	if (x>y)
	{
		while (y<=x)
		{
			if (y%2==0)
			{
				printf("%d\n",y);
			}
			y++;
		}
	}
	
	if (y>x)
	{
		while (x<=y)
		{
			if (x%2==0)
			{
				printf("%d\n",x);
			}
			x++;
		}
	}
	getche();
}
