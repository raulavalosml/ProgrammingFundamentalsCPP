# include <stdio.h>
# include <conio.h>

int x,d,vf,da;

main()
{
	x=1;
	d=4000;
	printf("A%co	Depreciaci%cn	Valor fin de A%co	Depreciaci%cn acumulada\n",164,162,164,162);
	
	while (x<=7)
	{
		vf=28000-(d*x);
		da=d*x;
		printf("%.2d		%.2d	%.2d			%.2d\n",x,d,vf,da);
		x++;
	}
	getche();
}
