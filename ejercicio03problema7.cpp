# include <stdio.h>
# include <conio.h>

float frente,fondo,per,pol,ala,costopol,costoala,costo;

main()
{
	printf("Pon el valor del frente: "); scanf("%f",&frente);
	printf("Pon el valor del fondo: "); scanf("%f",&fondo);
	
	per=2*(frente)+2*(fondo);
	printf("El per%cmetro es: %8.2f\n",161,per);
	
	pol=int(per/3);
	printf("El n%cmero de polines es: %8.2f\n",163,pol);
	
	ala=per*3;
	printf("El alambre necesario es: %8.2f\n",ala);
	
	costopol=pol*55;
	costoala=ala*3;
	costo=costopol+costoala;
	
	printf("El costo total es: %8.2f",costo);
	
	getche();
}
