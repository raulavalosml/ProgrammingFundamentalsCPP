# include <stdio.h>
# include <conio.h>
# include <windows.h>

int x,y;

main()
{
	printf("Coloque el primer valor: "); scanf("%d",&x);
	
	if ((x>=1)&&(x<=1000)&&(x%2==0))
	{
		printf("Coloque el segundo valor: "); scanf("%d",&y);
	
		if((y<=1000)&&(y>=1)&&(y%2!=0)&&(y>x))
		{
			printf("Valores Correctos");
		}
		else
		{
			printf("Error, el segundo valor tiene que ser impar y mayor que el primer valor y entre 1 y mil");
		}
	}
	else
	{
		printf("Error, el primer valor debe ser par y entre 1 y 1000");
	}
	getche();
	
		
}


