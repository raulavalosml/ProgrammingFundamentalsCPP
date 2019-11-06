# include <stdio.h>
# include <conio.h>
# include <windows.h>

int x,y;

main()
{
	x=0;
	while ((x>10)||(x<1))
	{
		printf("Coloque el valor de x: "); scanf("%d",&x);
		if((x>10)||x<1)
		{
			printf("ERROR, fuera del rango 1 a 10\n");
			getche();
		}
	}
	printf("Primer valor correcto\n");
	printf("************************\n");
	
	y=0;
	while ((y>50)||(y<40))
	{
		printf("Coloque el valor de y: "); scanf("%d",&y);
		if ((y>50)||(y<40))
		{
			printf("ERROR, fuera del rango 40 a 50\n");
			getche();
		}
	}
	printf("Segundo valor correcto\n");
	printf("*************************\n");
	
	while (x<=y)
	{
		printf("%d\n",x);
		x=x+1;
	}
}
