# include <stdio.h>
# include <conio.h>

int x,y;
float r;

main()
{
	printf("Indica el valor entero: "); scanf("%d,",&x);
	printf("Indica el segundo valor entero: ");
	scanf("%d",&y);
	
	r=float(x)/float(y);
	
	printf("El resultado es %f", r);
	getche();
}
