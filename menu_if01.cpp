# include <stdio.h>
# include <conio.h>
# include <windows.h>

float x,y,in,r;

main()
{
	printf("\nMen%c de Opciones\n",163);
	printf("***************************\n");
	printf("1) Area del tri%cngulo\n",160);
	printf("2) Area del c%crculo\n",161);
	printf("3) Area del rect%cngulo\n",160);
	printf("4) Area del cuadrado\n",160);	
	printf("Coloque el valor de la instrucci%cn:  ",162); scanf("%f",&in);
	
	printf("\n\n");
	if (in==1)//triángulo
	{
		printf("Coloca el valor de la base: "); scanf("%f",&x);
		printf("Coloca el valor de la altura: "); scanf("%f",&y);
		
		r=(x*y)/2;
		
		printf("El %crea del tri%cngulo es: %.4f",160,160,r);
		getche();	
	}		
	else
	{
		if (in==2)//Área del círculo
		{
			printf("Coloca el valor del radio: ",160); scanf("%f",&x);
			
			r=(3.1416*x*x);
			
			printf("El %crea del círculo es: %.4f",160,r);  
			getche();
		}
		else
		{
			if (in==3)//Área del rectángulo
			{
				printf("Coloque el valor de la base: "); scanf("%f",&x);
				printf("Coloque el calor de la altura: "); scanf("%f",&y);
				
				r=x*y;
				
				printf("El %crea del rect%cngulo es: %.4f",160,160,r);
				getche();
			}
			else
			{
				if (in==4)//Area del cuadrado
				{
					printf("Coloque el valor del lado: "); scanf("%f",&x);
					
					r=x*x;
					
					printf("El %crea del cuadrado es: %.4f",160,r);
					getche();
				}
				else
				{
					printf("Error, el rango del menu es entre 1 y 4");
					getche();
				}
			}
		}
	}
}
