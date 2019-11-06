# include <stdio.h>
# include <conio.h>

int c,n,f;

main()
{
	printf("Coloca el valor de n: "); scanf("%d",&n);
	
	f=1;
	for(c=1;c<=n;c++) f=f*c;
	
	printf("El valor del factorial de %d es: %d",n,f);
	getche();
}
