# include <stdio.h>
# include <conio.h>
# include <math.h>

float x,y,op,po,yf;

main()
{
	op=1;
	while (op!=0)
	{
		
		printf("Valor de x: "); scanf("%f",&x);
		po=(5*x);
		y=pow (2.718281828459045235360,po);
		yf=((y-1)/(x));
		printf("Valor de y: %.6f\n",yf);
		getche();
		printf("Terminar op= 0\n");
		printf("Valor de op: "); scanf("%f",&op);
		printf("*****************************\n");
	}
}
