# include <stdio.h>
# include <conio.h>

int x,y;

main()
{
	printf("Coloque el primer valor: "); scanf("%d",&x);
	printf("Coloque el segundo valor: "); scanf("%d",&y);
	
	if(x==y) printf("Ambos valores son iguales");
	else 
	{
		printf("Ambos valores son diferentes\n");
		if(x>y) printf("El mayor es: %d",x);
		else printf("El mayor es: %d",y);
	}
	 
}
