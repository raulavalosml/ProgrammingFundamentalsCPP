# include <stdio.h>
# include <conio.h>
# include <math.h>

float po,h,y,op;

main()
{
	op=1;
	while (op!=0)
	{
		printf("Coloca el valor de h: "); scanf("%f",&h);
		po= pow((h+2),5);
		y=(((po-32))/h);
		printf("El valor de y es: %.6f\n",y);
		getche();
		printf("Valor de op: "); scanf("%f",&op);
		printf("**********************************\n");
	}
}
