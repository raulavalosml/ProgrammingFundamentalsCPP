# include <stdio.h>
# include <conio.h>
# include <windows.h>

int x,y,z,r;

main()
{
x=1;
r=1;
z=5;
while (x<=z)
{
	r=r*x;
	x=x+1;
}
printf("El valor de r es: %d",r);
}
