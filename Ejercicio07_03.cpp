# include <stdio.h>
# include <conio.h>
# include <windows.h>

float x,y;

main()
{
	printf("Coloque el primer valor: "); scanf("%f",&x);
	
	if ((x>=1)&&(x<=100))
	{
		printf("Coloque el segundo valor: "); scanf("%f",&y);
	
		if((y<=100)&&(y>=1))
		{
			printf("Valores Correctos");
		}
		else
		{
			printf("Error, el segundo valor esta fuera de rango");
		}
	}
	else
	{
		printf("Error, el primer valor esta fuera de rango");
	}
	getche();
		
}
