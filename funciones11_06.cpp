# include <stdio.h>
int i;

void uno()
{
	int i; i=1;	
}

int dos()
{
	int i; i=2;
	printf("El valor del void 2 de i es: %d\n",i);
}


main()
{
	i=10;
	uno(3);
	dos();
        printf("El valor final de I es: %d",i);
}

