# include <stdio.h>
# include <conio.h>
# include <windows.h>

int a,b,c,d,e;
float p;

main()
{
	printf("Coloque el primer valor : "); scanf("%d",&a);
	printf("Coloque el segundo valor: "); scanf("%d",&b);
	printf("Coloque el tercer valor : "); scanf("%d",&c);
	printf("Coloque el cuarto valor : "); scanf("%d",&d);
	printf("Coloque el quinto valor : "); scanf("%d",&e);
	
	p=(a+b+c+d+e)/5;
	printf("***************************************\n");
	printf("El valor del promedio es: %8.2f\n",p);
	
	if ((a>b)&&(a>c)&&(a>d)&&(a>e)) printf("El mayor valor es: %d\n",a);
	if ((b>a)&&(b>c)&&(b>d)&&(b>e)) printf("El mayor valor es: %d\n",b);
	if ((c>a)&&(c>b)&&(c>d)&&(a>e)) printf("El mayor valor es: %d\n",c);
	if ((d>a)&&(d>b)&&(d>c)&&(d>e)) printf("El mayor valor es: %d\n",d);
	if ((e>b)&&(e>c)&&(e>d)&&(e>a)) printf("El mayor valor es: %d\n",e);
	
	if ((a<b)&&(a<c)&&(a<d)&&(a<e)) printf("El menor valor es: %d\n",a);
	if ((b<a)&&(b<c)&&(b<d)&&(b<e)) printf("El menor valor es: %d\n",b);
	if ((c<a)&&(c<b)&&(c<d)&&(a<e)) printf("El menor valor es: %d\n",c);
	if ((d<a)&&(d<b)&&(d<c)&&(d<e)) printf("El menor valor es: %d\n",d);
	if ((e<b)&&(e<c)&&(e<d)&&(e<a)) printf("El menor valor es: %d\n",e);
	
	printf("***************************************\n");
	printf("Los pares son:                \n");
	
	if ((a%2)==0) printf("                  %d\n",a);
	if ((b%2)==0) printf("                  %d\n",b);
	if ((c%2)==0) printf("                  %d\n",c);
	if ((d%2)==0) printf("                  %d\n",d);
	if ((e%2)==0) printf("                  %d\n",e);

	printf("***************************************\n");
	printf("Los impares son:                \n");
	
	if ((a%2)!=0) printf("                  %d\n",a);
	if ((b%2)!=0) printf("                  %d\n",b);
	if ((c%2)!=0) printf("                  %d\n",c);
	if ((d%2)!=0) printf("                  %d\n",d);
	if ((e%2)!=0) printf("                  %d\n",e);	
	
	
	getche();
	
}
