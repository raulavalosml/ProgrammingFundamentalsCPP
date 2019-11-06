# include <stdio.h>
# include <conio.h>

int n,s;

main()
{
	n=0;
	while ((n>100)||(n<1))
	{
		printf("Coloca el valor de n: "); scanf("%d",&n);
		
		if ((n>100)||(n<1))
		{
			printf("Error, el rango va de 1 a 100\n");
			getche();
		}
	}
	
	printf("Los valores de la sumatoria son: ");
	
	for (n;n>=1;n--)
	{
		printf("%d, ",n);
		s=s+n;
	}
	getche();
	
	printf("\nLa sumatoria es: %d",s);
}
