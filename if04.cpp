# include <stdio.h>
# include <conio.h>
# include <windows.h>

float x,y,r;

main()
{
	printf("Coloque el primer valor: "); scanf("%f",&x);
	printf("Coloque el segundo valor: "); scanf("%f",&y);
	
	if (y==0) 
	{
		printf("La división no se puede realizar");
		Beep(500,3000);
	}
	else 
	{
		r=x/y;	
		printf("El resultado es: %.2f",r);	
	}
}
