# include <conio.h>
# include <stdio.h>

float x,y,z,p;

main()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("Coloque el valor de x: "); scanf("%f",&x);
		
		if ((x>100)||(x<1))
		{
			printf("Error, el rango es de 1 a 100\n");
			getche();
		}
	}
	
	y=0;
	while ((y>100)||(y<1))
	{
		printf("Coloque el valor de y: "); scanf("%f",&y);
		
		if ((y>100)||(y<1))
		{
			printf("Error, el rango es de 1 a 100\n");
			getche();
		}
	}
	
	z=0;
	while ((z>100)||(z<1))
	{
		printf("Coloque el valor de z: "); scanf("%f",&z);
		
		if ((z>100)||(z<1))
		{
			printf("Error, el rango es de 1 a 100\n");
			getche();
		}
	}
	
	p=(x+y+z)/3;
	
	printf("El promedio de los 3 valores es: %.4f",p);
	getche();
	
}

