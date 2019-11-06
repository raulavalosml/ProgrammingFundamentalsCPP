# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,y,z;

main()
{
	x=0;
	while ((x>10)||(x<1))
	{
		printf("Coloque el valor de x: "); scanf("%d",&x);
		if ((x>10)||(x<1))
		{
			printf("Error en el rango de 1 a 10");
		}
	}
	printf("Valor correcto\n");
	
	y=x-1;//numeros factoriales a multiplicar 
	z=x;
	
	while (y<=1)
	{
		z=z*y;
		y--;
	}
	
	printf("El valor factorial de %d es %d",x,z);
	getche();
}
