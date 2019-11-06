# include <stdio.h>
# include <conio.h>
# include <windows.h>

float b,ll,f,m,a,venta,dto,dto_pe,venta_dto;

main()
{
	printf("Indica la cantidad de bicicletas : "); scanf("%f",&b);
	printf("Indica la cantidad de llantas    : "); scanf("%f",&ll);
	printf("Indica la cantidad de frenos     : "); scanf("%f",&f);
	printf("Indica la cantidad de marcos     : "); scanf("%f",&m);
	printf("Indica la cantidad de asientos   : "); scanf("%f",&a);
	
	venta=(b*1200)+(ll*250)+(f*150)+(m*600)+(a*200);
	printf("********************************************************\n");
	printf("La venta total en pesos es: %8.2f\n", venta);
	
	printf("********************************************************\n");
	
	if (venta<1000) dto=0;
	if ((venta>=1000)&&(venta<3000)) dto=10;
	if((venta>=3000)&&(venta<6000)) dto=15;
	if(venta>=60000) dto=20;
	
	dto_pe=(venta*dto)/100;
	
	printf("El descuento es         : %8.2f%c\n",dto,37);
	printf("El descuento en pesos es: %8.2f\n",dto_pe);
	
	venta_dto=venta-dto_pe;	
	printf("********************************************************\n");
	printf("La venta final es de    : %8.2f",venta_dto);
		
	getche();
	
}
