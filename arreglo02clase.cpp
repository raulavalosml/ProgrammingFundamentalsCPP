#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int a[10];

void captura()
{
	for(int i=0;i<=9;i++);
	{
		printf("Coloca el valor de la posici%cn %d: ",162,i); scanf("%d",&a[i]);
		
		if ((a[i]>1000) || (a[i]<1))
		{
			printf("Error, valor fuera de rango entre 1 y 1000");
			getche();
			i--;
		}
	}
}

main()
{
	captura();
	getche();
}
