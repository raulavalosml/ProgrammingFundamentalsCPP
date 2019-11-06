# include <stdio.h>
# include <conio.h>
# include <windows.h>

float ven1,ven2,ven3,por,vent;

main()
{
	printf("Indique las ventas del vendedor 1: "); scanf("%f",&ven1);
	printf("Indique las ventas del vendedor 2: "); scanf("%f",&ven2);
	printf("Indique las ventas del vendedor 3: "); scanf("%f",&ven3);
	
	printf("************************************\n");
	
	if (ven1<1)
	{
		printf("Error en el primer valor, rango desde 1 o mayor");
	}
	if ((ven1<10000)||(ven1>1))
	{
		por=0;
		printf("El porcentaje de comisi%cn es: %f",162,por);
	}
	getche();
}
