# include <stdio.h>
# include <conio.h>
# include <windows.h>

float a,dep,v;

main()
{
	printf("Año	Depreciacion	Valor al fin de ano	Depreciacion acumulada\n");
	printf("__________________________________________________________\n");
	a=1;
	while (a<=7)
	
	{
		dep=4000*a;
		v=28000-dep;
		printf("%f	4000		%f		%f      \n",a,v,dep);
		a=a+1;
	}	
}
