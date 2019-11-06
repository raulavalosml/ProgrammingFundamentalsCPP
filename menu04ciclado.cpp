# include <stdio.h>
# include <conio.h>
# include <windows.h>
# include <math.h>

int x,y,z,op;
float r;

main()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("\n\nColoque el primer valor: "); scanf("%d",&x);
		if ((x>100)||(x<1))
		{
			printf("Error, primer valor fuera de rango, es de 1 a 100\n");
			getche(); 
		}
	}
	printf("Primer valor correcto\n\n");
		
	y=0;
	while ((y>100)||(y<1))
	{
		printf("Coloque el segundo valor: "); scanf ("%d",&y);
		if ((y>100)||(y<1))
		{
			printf("Error, segundo valor fuera de rango, es de 1 a 100\n");
			getche();
		}
	}
	printf("Segundo valor correcto\n\n");
		
	z=0;
	while ((z>100)||(z<1))
	{
		printf("Coloque el tercer valor: "); scanf("%d",&z);
		if ((z>100)||(z<1))
		{
			printf("Error, el tercer valor esta fuera de rango, es de 1 a 10\n");
			getche();
		}
	}
	printf("Tercer valor correcto\n\n");
		
	op=0;
	while (op!=6)
	{
		printf("1) Promedio\n");
		printf("2) Numero mayor\n");
		printf("3) Numero menor\n");
		printf("4) Pares\n");
		printf("5) Impares\n");
		printf("6) Terminar\n");
		printf("Coloque la opcion deseada: "); scanf("%d",&op);
		
		if ((op>6)||(op<1))
		{
			printf("Error en el rango, va de 1 a 6\n\n");
			getche();
		}
		
		if (op==1)
		{
			r=(x+y+z)/3;
			printf("El promedio de los 3 numeros es: %.4f\n",r);
			getche();
		}
		
		if(op==2)
		
		
	}
}
