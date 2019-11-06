# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,y,r;

main()
{
	x=0;
	while ((x>10)||(x<1))
	{
		printf("Coloque el valor de x: "); scanf("%d",&x);
		if ((x>10)||(x<1))
		{
			printf("Error, el rango es de 1 a 10\n");
			getche();
		}
	}
	printf("El primer valor es correcto\n");
	printf("*********************\n");
	
	y=0;
	while ((y>5)||(y<1))
	{
		printf("Coloque el valor de y: "); scanf("%d",&y);
		if ((y>5)||(y<1))
		{
			printf("Error, el rango es de 1 a 5\n");
			getche();
		}
	}
	printf("El segundo valor es correcto\n");
	printf("******************************\n");
	
	r=pow(x,y);
	
	printf("El valor de elevar %d a la %d es igual a: %d",x,y,r);
	getche();
}
