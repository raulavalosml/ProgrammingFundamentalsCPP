# include <stdio.h>
# include <conio.h>

int x,y,r;

main()
{
	x=5;
	y=10;
	r=x+y;	
	printf("La suma de %d m%cs %d es igual a %d\n",x,160,y,r);
	
	r=x-y;
	printf("La resta de %d menos %d es igual a %d\n",x,y,r);
	
	r=x*y;
	printf("La multiplicaci%cn de %d por %d es igual a %d\n",162,x,y,r);
	
	r=y/x;
	printf("La divisi%cn de %d entre %d es igual a %d\n",162,x,y,r);
	getche();
}
