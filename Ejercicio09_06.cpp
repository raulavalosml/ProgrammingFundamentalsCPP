# include <stdio.h>
# include <conio.h>

int x;

main()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("Coloque el valor de x: "); scanf("%d",&x);
		
		if ((x>100)||(x<1))
		{
			printf("Error, el valor de x es entre 1 y 100\n");
			getche();
		}
	}
	
	printf("Valor Correcto");
	getche();
}
