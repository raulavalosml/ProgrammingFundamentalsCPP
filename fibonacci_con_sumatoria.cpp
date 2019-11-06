# include <conio.h>
# include <stdio.h>

main()
{
	int x=0;
	
	while(x<1)
	{
		printf("Coloca el valor de x: "); scanf("%d",&x);
		
		if(x<1)
		{
			printf("Error, tiene que ser igual o mayor que 1...\n");
		}
	}
	int a,b,c,d;
	
	a=0;
	b=1;
	c=0;
	d=0;
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
