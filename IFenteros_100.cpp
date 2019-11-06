# include <stdio.h>
# include <conio.h>

int x;

main()
{
	printf("Indica el valor: "); scanf("%d",&x);
	
	if (x>100) printf("Valor MAYOR que 100");
	else 
	{
	if (x==100) printf("Valor igual a 100");
	else printf("Valor menor que 100");
	}
	getche();
}
