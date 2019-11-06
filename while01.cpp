# include <stdio.h>
# include <conio.h>
# include <windows.h>

float gc,gf;

main()
{
	gc=10;
	while (gc<=100)
	{
		gf=((gc*9)/5)+32;
		printf("%.2f   %.2f\n",gc,gf);
		gc=gc+10;
	}
}
