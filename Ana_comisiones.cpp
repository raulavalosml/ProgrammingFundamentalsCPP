#include <conio.h>
#include <stdio.h>

int c1,c2,c3,prc1,cp1,prc2,cp2,prc3,cp3, mc;


main ()
{
	printf("Indique la cobranza del, cobrador  1 : "); scanf("%d",&c1);
	printf("Indique la cobranza del cobrador  2 : "); scanf("%d",&c2);
	printf("Indique la cobranza del cobrador  3 : "); scanf("%d",&c3);
	
	if ((c1>=0)&&(c1<=10000)) prc1= 1;
	if ((c1>=10001)&&(c1<=50000)) prc1= 2;
	if ((c1>=50001)&&(c1<=100000)) prc1= 3;
	if (c1>=100001) prc1= 4;
	
	cp1= (c1*prc1)/100;
	
	if ((c2>=0)&&(c1<=10000)) prc2= 1;
	if ((c2>=10001)&&(c1<=50000)) prc2= 2;
	if ((c2>=50001)&&(c1<=100000)) prc2= 3;
	if (c2>=100001) prc2= 4;
	
	cp2= (c2*prc2)/100;
	
	if ((c3>=0)&&(c1<=10000)) prc3= 1;
	if ((c3>=10001)&&(c1<=50000)) prc3= 2;
	if ((c3>=50001)&&(c1<=100000)) prc3= 3;
	if (c3>=100001) prc3= 4;
	
	cp3= (c3*prc3)/100;
	
	
	printf("\n**************************************\n");
	printf("Comisi%cn del cobrador 1 en porcentaje : %d\n", 162, prc1);
	printf("Comisi%cn del cobrador 1 en pesos      : %d\n", 162, cp1);
	printf("Comisi%cn del cobrador 2 en porcentaje : %d\n", 162, prc2);
	printf("Comisi%cn del cobrador 2 en pesos      : %d\n", 162, cp2);
	printf("Comisi%cn del cobrador 3 en porcentaje : %d\n", 162, prc3);
	printf("Comisi%cn del cobrador31 en pesos      : %d\n", 162, cp3);
	printf("El cobrador que m%cs cobr%c             : %d\n", 160, 162, mc);
	
	if (c1>c2); mc= c1;
	{
		printf("El cobrador que m%cs cobr%c             : %f\n", 160, 162, mc);
		if (c2>mc); mc =c2;
		{
			printf("El cobrador que m%cs cobr%c             : %f\n", 160, 162, mc);
			if (c3>mc); mc= c3;
			{
				printf("El cobrador que m%cs cobr%c             : %f\n", 160, 162, mc);
			}
		}
	}
	
	getche ();
	
}
