# include <stdio.h>
# include <conio.h>

float x,y,op;

main()
{
	op=1;
	while (op!=0)
	{
		printf("Valor de x: "); scanf("%f",&x);
		y=((x*x)-(2*x))/((x*x)-(x)-(2));
		printf("Valor de y: %.6f\n",y);
		getche();
		printf("Terminar op= 0\n");
		printf("Valor de op: "); scanf("%f",&op);
		printf("*****************************\n");
	}
}
