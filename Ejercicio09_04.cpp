# include <conio.h>
# include <stdio.h>

int x,y;

main()
{
	printf("Coloque el primer valor: "); scanf("%d",&x);
	printf("Coloque el segundo valor: "); scanf("%d",&y);
	
	if(x>y)
	{
		while (y<=x)
		{
			printf("%d\n",y);
			y++;
		}
	}
	
	if (y>x)
	{
		while (x<=y)
		{
			printf("%d\n",x);
			x++;
		}
	}
	
	getche();
}
