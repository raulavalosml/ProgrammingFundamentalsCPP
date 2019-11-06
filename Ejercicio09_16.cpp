# include <stdio.h>
# include <conio.h>

int x,y,z,op;
float p;
main()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("Coloca el valor de x: "); scanf("%d",&x);
		
		if ((x>100)||(x<1))
		{
			printf("Error, el rango es de 1 a 100\n");
			getche();
		}
	}

	y=0;
	while ((y>100)||(y<1))
	{
		printf("Coloca el valor de y: "); scanf("%d",&y);
		
		if ((y>100)||(y<1))
		{
			printf("Error, el rango es de 1 a 100\n");
			getche();
		}
	}
	
	z=0;
	while ((z>100)||(z<1))
	{
		printf("Coloca el valor de z: "); scanf("%d",&z);
		
		if ((z>100)||(z<1))
		{
			printf("Error, el rango es de 1 a 100\n");
			getche();
		}
	}
	
	op=0;
	while (op!=6)
	{
		printf("*********************\nOpciones\n");
		printf("1) Promedio\n");
		printf("2) Numero mayor\n");
		printf("3) Numero menor\n");
		printf("4) Pares\n");
		printf("5) Impares\n");
		printf("6) Terminar\n");
		printf("Coloca la opcion deseada: "); scanf("%d",&op);
		
		if (op==1)
		{
			p=(x+y+z)/2;
			printf("El promedio de los valores %d, %d y %d es: %f\n",x,y,z,p);
		}
		
		if (op==2)
		{
			if ((x>y)&&(x>z))
			{
				printf("El valor mayor es: %d\n",x);
			}
			
			if ((y>x)&&(y>z))
			{
				printf("El valor mayor es: %d\n",y);
			}
			
			if ((z>y)&&(z>x))
			{
				printf("El valor mayor es: %d\n",z);
			}
		}
		
		if (op==3)
		{
			if ((x<y)&&(x<z))
			{
				printf("El valor menor es: %d\n",x);
			}
			
			if ((y<x)&&(y<z))
			{
				printf("El valor menor es: %d\n",y);
			}
			
			if ((z<y)&&(z<x))
			{
				printf("El valor menor es: %d\n",z);
			}
		}
		
	}
}
