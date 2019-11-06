# include <stdio.h>
# include <conio.h>

int x,y,z,suma;
float prom;

main()
{
	printf("Indica el primer valor entero: "); scanf("%d",&x);
	printf("Indica el segundo valor entero: "); scanf("%d",&y);
	printf("Indica el tercer valor entero: "); scanf("%d",&z);
	
	suma=x+y+z;
	prom=float(suma)/3;
	
	printf("Los valores capturados son: %d, %d, %d.\n", x,y,z);
	printf("La suma de los valores es: %d\n", suma);
	printf("El promedio de los valores es:%f\n", prom);
	getche();
}
