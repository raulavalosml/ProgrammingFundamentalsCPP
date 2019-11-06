# include <stdio.h>
# include <conio.h>

float c,p,op;

main()
{
	op=0;
	while (op==0)
	{
		printf("Coloca el valor de porcentaje: "); scanf("%f",&p);
		c=(7300*p)/(100-p);
		printf("El costo es de: %f\n",c);
		getche();
		printf("Si desea continuar presiona 0: "); scanf("%f",&op);
	}
	
}

