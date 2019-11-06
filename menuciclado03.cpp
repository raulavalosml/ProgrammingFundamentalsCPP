# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,y,z,op;
float r;

main()
{
	printf("Coloque el primer valor: "); scanf("%d",&x);
	if ((x>=1)&&(x<=100))
	{
		printf("Primer valor correcto\n");
		printf("Coloque el segundo valor: "); scanf("%d",&y);
		if ((y>=1)&&(y<=1000))
		{
			printf("Segundo valor correcto\n");
			printf("Coloque el tercer valor: "); scanf("%d",&z);
			if ((z>=1)&&(z<=1))
			{
				printf("Los valores son correctos\n");
				
				
				op=0;
				while (op=!6)
				{
					printf("1) Promedio");
					printf("2) Numero mayor");
					printf("3) Numero menor");
					printf("4) Pares");
					printf("5) Impares");
					printf("6) Terminar");
					
					if ((op>6)||(op<1))
					{
						printf("Error en el rango, es de 1 a 6");
					}
					
					if (op==1)
					{
						r=(x+y+z)/3;
						printf("El promedio de los 3 numeros es: %f",r);
					}
				}
			}
		}
		else
		{
			printf("ERROR en el rango, es de 1 a 1000");
		}
	}
	else
	{
		printf("ERROR en el rango, es de 1 a 1000");
	}
	
}
