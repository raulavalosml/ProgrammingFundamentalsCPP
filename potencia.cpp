# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,y,r;

main()
{
	printf("Valor de x: "); scanf("%d",&x);
	printf("Valor de y: "); scanf("%d",&y);
	
	r=pow (x,y);
	printf("El valor de x a la potencia y es igual a: %d",r);
	getche();
	
}
