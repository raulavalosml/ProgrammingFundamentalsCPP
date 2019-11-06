# include <stdio.h>
# include <conio.h>
# include <windows.h>

float x,y,z;

main ()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("Coloque el primer valor: "); scanf("%f",&x);
		if((x>100)||(x<1))
		{
			printf("ERROR, Primer valor fuera del rango, 1 a 100\n");
			getche();
		}
	}
	printf("Primer valor correcto\n");
	getche();
	
	y=0;
	while ((y>100)||(y<1))
	{
		printf("Coloque el segundo valor: "); scanf("%f",&y);
		if((y>100)||(y<1))
		{
			printf("ERROR, Segundo valor fuera del rango, 1 a 100\n");
			getche();
		}
	}
	printf("Segundo valor correcto\n");
	getche();
	
	z=0;
	while ((z>100)||(z<1))
	{
		printf("Colocque el tercer valor: "); scanf("%f",&z);
		if ((z>100)||(z<1))
		{
			printf("ERROR, Tercer valor fuera del rango, 1 a 100\n");
			getche();
		}
	}
	printf("Tercer valor Correcto\n");
	printf("Todos los valores son correctos.");
	getche();
}
