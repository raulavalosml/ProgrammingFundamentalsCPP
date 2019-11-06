# include <stdio.h>
# include <conio.h>

int x,y,z;
float r;

main ()
{
	printf("Da el primer valor entero:");
	scanf("%d",&x);
	printf("Da el segundo valor entero:");
	scanf("%d",&y);
	printf("Da el tercer valor entero:");
	scanf("%d",&z);
	r=(x+y+z)/3;
	printf("El promedio de los valores %d, %d y %d es: %f", x,y,z,r);
	
}
