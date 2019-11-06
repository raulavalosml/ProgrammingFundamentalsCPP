# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

float r,x,y,op;

main()
{
	op=0;
	while (op!=5)
	{
		printf("1)Suma\n");
		printf("2)Resta\n");
		printf("3)Multiplicaci%cn\n",162);
		printf("4)Divisi%cn\n",162);
		printf("5)Terminar\n");
		printf("Indica la opci%cn deseada",162); scanf("%f",&op);
		printf("Indica el primer valor: "); scanf("%f",&x);
		printf("Indica el segundo valor: "); scanf("%f",&y);

		if (op==1) 
		{
			r=x+y;
		}
		if (op==2)
		{
			r=x-y;
		} 
		if (op==3)
		{
			r=x*y;
		}
		if (op==4)
		{
			r=x/y;
		}
		if (op!=5)
		{
			printf("El resultado es: %f\n",r);
		}

	}
}
