# include <stdio.h>
# include <conio.h>
# include <windows.h>

float ven1,ven2,ven3,por,vent,porp1,porp2,porp3,porpt;

main()
{
	printf("Indique las ventas del vendedor 1: "); scanf("%f",&ven1);
	printf("Indique las ventas del vendedor 2: "); scanf("%f",&ven2);
	printf("Indique las ventas del vendedor 3: "); scanf("%f",&ven3);
	
	printf("************************************\n");
	

	//Vendedor 1

		if (ven1<1)
	{
		printf("Error en el primer valor, rango desde 1 o mayor\n");
	}
	
	if ((ven1<=10000)&&(ven1>=0))
	{
		por=0; porp1=por*ven1;
		printf("Comisi%cn del vendedor 1 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 1 en pesos:      %.4f\n\n",162,porp1);
	}
	
	if ((ven1<=50000)&&(ven1>10000))
	{
		por=2; porp1=(por*ven1)/100;
		printf("Comisi%cn del vendedor 1 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 1 en pesos:      %.4f\n\n",162,porp1);
	}
	
	if ((ven1<=100000)&&(ven1>50000))
	{
		por=3; porp1=(por*ven1)/100;
		printf("Comisi%cn del vendedor 1 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 1 en pesos:      %.4f\n\n",162,porp1);
	}
	
	if (ven1>100000)
	{
		por=4; porp1=(por*ven1)/100;
		printf("Comisi%cn del vendedor 1 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 1 en pesos:      %.4f\n\n",162,porp1);
	}

	
	//Vendedor 2
	if (ven2<1)
	{
		printf("Error en el segundo valor, rango desde 1 o mayor\n");
	}
	
	if ((ven2<=10000)&&(ven2>=0))
	{
		por=0; porp2=por*ven2;
		printf("Comisi%cn del vendedor 2 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 2 en pesos:      %.4f\n\n",162,porp2);
	}
	
	if ((ven2<=50000)&&(ven2>10000))
	{
		por=2; porp2=(por*ven2)/100;
		printf("Comisi%cn del vendedor 2 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 2 en pesos:      %.4f\n\n",162,porp2);
	}
	
	if ((ven2<=100000)&&(ven2>50000))
	{
		por=3; porp2=(por*ven2)/100;
		printf("Comisi%cn del vendedor 2 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 2 en pesos:      %.4f\n\n",162,porp2);
	}
	
	if (ven2>100000)
	{
		por=4; porp2=(por*ven2)/100;
		printf("Comisi%cn del vendedor 2 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 2 en pesos:      %.4f\n\n",162,porp2);
	}

	//Vendedor 3
	if (ven3<1)
	{
		printf("Error en el segundo valor, rango desde 1 o mayor\n");
	}
	
	if ((ven3<=10000)&&(ven3>=0))
	{
		por=0; porp3=por*ven3;
		printf("Comisi%cn del vendedor 3 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 3 en pesos:      %.4f\n\n",162,porp3);
	}
	
	if ((ven3<=50000)&&(ven3>10000))
	{
		por=2; porp3=(por*ven3)/100;
		printf("Comisi%cn del vendedor 3 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 3 en pesos:      %.4f\n\n",162,porp3);
	}
	
	if ((ven3<=100000)&&(ven3>50000))
	{
		por=3; porp3=(por*ven3)/100;
		printf("Comisi%cn del vendedor 3 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 3 en pesos:      %.4f\n\n",162,porp3);
	}
	
	if (ven3>100000)
	{
		por=4; porp3=(por*ven3)/100;
		printf("Comisi%cn del vendedor 3 en porcentaje: %.4f\n",162,por);
		printf("Comisi%cn del vendedor 3 en pesos:      %.4f\n\n",162,porp3);
	}
	
	vent=ven1+ven2+ven3;
	porpt=porp1+porp2+porp3;
		
	printf("Total de ventas:                   %.4f\n",vent);
	printf("Total de comisiones:               %.4f\n",porpt);

	if ((ven1>ven2)&&(ven1>ven3))
	{
		printf("Vendedor que vendi%c m%cs:              Vendedor 1",162,160);
	}
	
	if ((ven2>ven1)&&(ven2>ven3))
	{
		printf("Vendedor que vendi%c m%cs:              Vendedor 2",162,160);
	}
	
	if ((ven3>ven1)&&(ven3>ven2))
	{
		printf("Vendedor que vend%c m%cs:               Vendedor 3",162,160);
	}


	getche();
}
