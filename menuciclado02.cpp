# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

float x,y,r,op;

main()
{
	op=0;
	while (op!=5)
	{	
		printf("\n\nMenu de opciones\n\n");
		printf("1) Area del triangulo\n");
		printf("2) Area del circulo\n");
		printf("3) Area del cuadrado\n");
		printf("4) Area del rectangulo\n");
		printf("5) Terminar\n");
		printf("Seleccione la opcion a ejecutar: "); scanf("%f",&op);
		
		if((op>5)||(op<1))
		{
			printf("Error en el rango, es de 1 a 5");
			getche();
		}
		
		if (op==1)
		{
			printf("Coloque el valor de la base: "); scanf("%f",&x);
			printf("Coloque el valor de la altura: "); scanf("%f",&y);
			r=(x*y)/2;
			printf("El area del triangulo es: %.4f\n",r);
			printf("************************************");
			getche();
		}
		
		if (op==2)
		{
			printf("Coloque el valor del radio: "); scanf("%f",&x);
			r=(3.1416)*(x)*(x);
			printf("El area del circulo es: %.4f\n",r);
			printf("************************************");
			getche();
		}
		
		if (op==3)
		{
			printf("Coloque el valor del lado: "); scanf("%f",&x);
			r=pow(x,2);
			printf("El area del cuadrado es: %.4f\n",r);
			printf("************************************");
			getche();
		}
		
		if (op==4)
		{
			printf("Coloque el valor de la base: "); scanf("%f",&x);
			printf("Coloque el valor de la altura: "); scanf("%f",&y);
			r=x*y;
			printf("El area del rectangulo es: %.4f\n",r);
			printf("************************************");
			getche();
		}
		
		if (op==5)
		{
			printf("Fin del programa.");
		}
	}
	 
}
