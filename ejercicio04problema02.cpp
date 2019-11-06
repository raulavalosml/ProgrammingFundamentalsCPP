# include <stdio.h>
# include <conio.h>

float costo,material,venta,utilidad,a,b,c,flotadores;

main()
{
	printf("Cantidad de modelos A: "); scanf("%f",&a);
	printf("Cantidad de modelos B: "); scanf("%f",&b);
	printf("Cantidad de modelos C: "); scanf("%f",&c);
		
	material=(a*10)+(b*15)+(c*20);
	printf("Cantidad de pl%cstico en metros cuadrados: %8.2f\n",160,material);
	
	flotadores=a+b+c;
	printf("Cantidad de flotadores: %8.0f\n",flotadores);
	
	printf("Cantidad de tapas 1.0m de di%cmetro: %8.0f\n",160,a);
	printf("Cantidad de tapas 1.5m de di%cmetro: %8.0f\n",160,b);
	printf("Cantidad de tapas 2.0m de di%cmetro: %8.0f\n",160,c);
	
	costo=(material*50)+(a*25)+(b*35)+(c*45);
	printf("Costo total del material: %8.2f\n",costo);
		
	venta=(a*760)+(b*1130)+(c*1490);
	printf("Precio total de venta: %8.2f\n",venta);
	
	utilidad=venta-costo;
	printf("Utilidad de la venta %8.2f",utilidad);

	utilidad=(venta-costo);
	getche();
}
