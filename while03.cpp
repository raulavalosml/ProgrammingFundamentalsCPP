# include <stdio.h>
# include <conio.h>
# include <windows.h>

float x,y;

main()
{
	x=5;
	while (x<=100)
	{
		y=x/17.61;
		printf("%f		%f\n",x,y);
		x=x+5;
	}
}
