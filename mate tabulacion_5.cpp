# include <stdio.h>
# include <conio.h>
# include <math.h>

float x,a,b,y,op;

main()
{
	op=0;
	while (op==0)
	{
		printf("Coloca el valor de x: "); scanf("%f",&x);
		a= (pow (x,6))-1;
		b= (pow (x,10))-1;
		y=a/b;
		printf(" El valor de y es: %.6f\n",y);
		getche();
	}
}
