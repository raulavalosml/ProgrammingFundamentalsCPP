# include <stdio.h>
# include <conio.h>
# include <windows.h>

float compra,dto,dto_p,total;

main()
{
	printf("Monto de la compra: "); scanf("%f",&compra);
	
	if (compra<10000) dto=0;
	if (compra>=10000) dto=5;
	if (compra>=20000) dto=10;
	
	dto_p=(compra*dto)/100;
	total=compra-dto_p;
	
	printf("\n**************************************\n");
	printf("El total de la compra es: $ %10.2f\n",compra);
	printf("El descuento en porcentaje es: %10.2f\n",dto);
	printf("El descuento en pesos es: %10.2f\n",dto_p);
	printf("***************************************\n");
	printf("El total a cobrar es: %10.2f\n",total);
	printf("***************************************\n");
	
	getche();
}
