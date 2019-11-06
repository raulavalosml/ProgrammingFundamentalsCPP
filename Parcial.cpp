# include <stdio.h>
# include <conio.h>

int x,n,c,a,b,s,r,d;

main()
{
	x=0;
	while ((x>100)||(x<1))
	{
		printf("Coloca el valor de x: "); scanf("%d",&x);
		
		if ((x>100)||(x<1))
		{
			printf("Error, el rango de x va de 1 a 100\n");
			getche();
		}
	}
	
	printf("Valor correcto\n");
	
	a=0;
	b=1;
	c=0;
	r=c;
						while(c<=x)
	{
		printf("%d,",c);
		a=b;
		b=c;
		c=a+b;
		d=c+b-1;
	}
	
	printf("\nLa sumatiora es: %d",d);
		
	
}
	
	

