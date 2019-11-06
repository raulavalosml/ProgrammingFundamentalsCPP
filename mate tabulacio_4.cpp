# include <conio.h>
# include <stdio.h>
# include <math.h>

float x,y,po,op;

main()
{
	op=0;
	while (op==0)
	{
	printf("Coloca el valor de x: "); scanf("%f",&x);
	po= ((pow ((x+4),.5))-2)/x;
	printf("%.6f\n",po);
	printf("*******************\n");
	getche();
}
}
