# include <stdio.h>
# include <conio.h>
# include <windows.h>

float x;

main()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("Indica el valor de X: "); scanf("%f",&x);
		if ((x>100)||(x<1))
		{
			printf("Error, valor fuera del rango\n");
			getche();
		}
	}
	printf("Valor correcto");
	getche();
}

