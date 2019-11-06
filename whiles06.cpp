# include <stdio.h>
# include <conio.h>
# include <windows.h>

int x,y,z;


main()
{
	printf("Coloque el valor de x: "); scanf("%d",&x);
	printf("Coloque el valor de y: "); scanf("%d",&y);
	
	if (x>y)
	{
		while (y<=x)
		{
			z=y%2;
			if(z==0)
			{
				printf("%d\n",y);
			}
			y=y+1;
		}
	}
	else
	{
		if (y>x)
		{
			while (y>=x)
			{
				z=x%2;
				if(z==0)
				{
					printf("%d\n",x);
				}
				x=x+1;
			}
		}
	}
}
