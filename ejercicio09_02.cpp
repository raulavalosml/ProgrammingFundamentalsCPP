# include <stdio.h>
# include <conio.h>

float x,y;

main()
{
	printf("\nPesos					D%clares\n",162);
	x=5;
	while (x<=100)
	{
		y=x*15;
		printf("%.2f					%.2f\n",x,y);
		x=x+5;
	}
	getche();
	
}
