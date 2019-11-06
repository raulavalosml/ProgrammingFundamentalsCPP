# include <stdio.h>
# include <conio.h>
# include <windows.h>

float x,y;

main()
{
	printf("Coloque el valor: ");
	scanf("%f",&x);
	
	if ((x<1)||(x>100))
	{
	printf("Error");
	}
	else 
		
		{
		printf("Coloque un segundo valor: ");
		scanf("%f",&y);
		
			
			if ((y>=1)&&(y<=100)) printf("Valores Correctos");
			else 
				
					printf("Error");
		}
				
		
	getche();
}
