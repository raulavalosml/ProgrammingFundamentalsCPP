# include <stdio.h>
# include <conio.h>
# include <windows.h>

int x,y,op;
float r;

main()
{
	printf("Coloca el primer valor: "); scanf("%d",&x);
	printf("Coloca el segundo valor: "); scanf("%d",&y);
	
	printf("\n\n1) Suma\n");
	printf("2) Resta\n");
	printf("3) Multiplicaci%cn\n",162);	
	printf("4) Divisi%cn\n",162);
	
	printf("\nIndica la opci%cn",162); scanf("%d",&op);
	
	if ((op>4)||(op<1))//Error en opción
	{
		printf("Error, opci%cn fuera de rango, entre 1 y 4");
		getche();
	}
	else //opción correcta
	{
		if (op==1) //Suma
		{
			r=x+y;
			printf("\nLa suma de los dos valores es : %.2f",r);
			getche();
		}
		
		if(op==4)//Division
		{
			if (y==0)
			{
				printf("La divisi%cn no es posible entre 0",162);
							
			}
			else
			{
				r=x/y;
				printf("El valor de la divisi%cn es: %.2f ",162,r);
				getche();
			}
			
		}
		
		if (op==2)//Resta
		{
			if (x>=y)
			{
				r=x-y;
				printf("La resta del primer valor menos el segundo valor es: %.2f",r);
				getche();
			}
			else
			{
				r=y-x;
				printf("La resta del segundo valor menos el primer valor es: %.2f",r);
				getche();
			}
		}
		
		if (op==3)//Multiplicación
		{
			r=x*y;
			printf("La multiplicaci%c de los dos valores es: %f",162,r);
			getche();
		}
	}
}
