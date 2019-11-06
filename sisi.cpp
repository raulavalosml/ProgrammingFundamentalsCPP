# include <stdio.h>
# include <conio.h>
 
main()
{
    int x,f,f1=-1,f2=1;
  
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
     
    while(x>0)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        x--;
    }
    getch();
}
