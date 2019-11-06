# include <stdio.h>
# include <conio.h>
# include <math.h>

float op,x,y;

main()
{
	op=0;
	while (op==0)
	{
	printf("Coloca el valor de x: "); scanf("%f",&x);
	y=((pow(9,x))-(pow(5,x)))/x;
	printf("El valor de y es: %f\n",y);
	
	getche();
}
}
