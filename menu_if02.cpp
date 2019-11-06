# include <stdio.h>
# include <conio.h>
# include <windows.h>

int in,in2,in3;
float costo,pro,ram,disco;

main()
{
	printf("***************************\n\n");
	printf("Men%c de opciones\n",163);
	printf("Memoria RAM\n");
	printf("1) 1 GygaByte\n");
	printf("2) 2 GygaBytes\n");
	printf("3) 3 GygaBytes\n");
	
	printf("Seleccione una opci%cn de RAM: ",162); scanf("%d",&in);
	
	if (in==1) 
	{
		ram=1000; printf("Precio de ram: %.4f",ram);
	}
	
		if (in==2) 
		{
			ram=2000; printf("Precio de ram: %.4f",ram);
		}
	
			if (in==3)
			{
				ram=4000; printf("Precio de ram: %.4f",ram);
			}
	
				if ((in<1)||(in>3))
				{
					printf("Error en el rango de opciones, de 1 a 3");
				}
	
	printf("\n\n***************************\n\n");
	printf("Espacio Disco Duro\n");
	printf("1) 300 GigaBytes\n");	
	printf("2) 600 GigaBytes\n");
	printf("3) 900 GigaBytes\n");
	printf("Seleccione una opci%cn de memoria: ",162); scanf("%d",&in2);
	
	if (in2==1) 
	{
		disco=3000; printf("El precio del disco duro es: %.4f",disco);
	}
	
		if (in2==2)
		{
			disco=6000; printf("El precio del disco duro es: %.4f",disco);
		}
	
			if (in2==3)
			{
				disco=9000; printf("El precio del disco duro es: %.4f",disco);
			}
	
				if ((in2<1)||(in2>3))
				{
					printf("Error en el rango, es de 1 a 3");
				}
				
	printf("\n\n***************************\n\n");
	printf("Opciones de velocidad del procesador\n");
	printf("1) 1.5 GigaHertz\n");
	printf("2) 2.0 GigaHertz\n");
	printf("3) 2.5 GigaHertz\n");
	printf("Seleccione una opcion: "); scanf("%d",&in3);
	
	if (in3==1)
	{
		pro=3000; printf("El precio del procesador es: %.4f",pro);
	}
	else
	{
		if (in3==2)
		{
			pro=4000; printf("El precio del procesador es: %.4f",pro);
		}
		else
		{
			if (in3==3)
			{
				pro=5000; printf("El precio del procesador es: %.4f",pro);
			}
			else
			{
				if ((in3<1)||(in3>3))
				{
					printf("Error");
				}
			}
		}
	}
	printf("\n\n***************************\n\n");
	costo=pro+disco+ram+4000;
	printf("El costo final del computador es: %.4f",costo);


}
