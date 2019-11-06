#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float a[100],aux[100];
int n;



void menor()
{
	int i,men;
	men=a[0];
	for(i=1;i<=9;i++)
	{
		if ((a[i]<men)&&(a[i]>0))
		{
			men=a[i];
		}
	}
	printf("\nEl valor menor del arreglo es: %d",men);
	getche();
}

void mayor()
{
	int i,may;
	may=a[0];
	for(i=1;i<=9;i++)
	{
		if (a[i]>may)
		{
			may=a[i];
		}
	}
	printf("\nEl valor mayor del arreglo es: %d",may);
	getche();
}

void ordena()
{
	float ayuda;
	
	for(int i=0; i<n;i++) aux[i]=a[i];
	
	for(int i=0; i<n;i++)
	{
		for(int j=i+1; j<n;j++)
		{
			if (aux[i]>aux[j])
			{
				ayuda=aux[i];
				aux[i]=aux[j];
				aux[j]=ayuda;
			}
		}
	}
	printf("\nValores Ordenados\n");
	for (int i=0;i<n;i++)
	{
		printf("%.2f\n",aux[i]);
	}
	getche();
}

void inversa()
{
	float ayuda;
	
	for(int i=0; i<n;i++) aux[i]=a[i];
	
	for(int i=0; i<n;i++)
	{
		for(int j=i+1; j<n;j++)
		{
			if (aux[i]>aux[j])
			{
				ayuda=aux[i];
				aux[i]=aux[j];
				aux[j]=ayuda;
			}
		}
	}
	printf("\nValores Ordenados\n");
	for (int i=n;i>0;i--)
	{
		printf("%.2f\n",aux[i]);
	}
	getche();
}

void mediana()
{
	ordena();
	int pos=n/2;
	float medi;
	if(n%2==0) medi=(aux[pos]+aux[pos-1]/2.0);
	else medi=(aux[pos]);
	system("cls");
	printf("La mediana es : %.2f",medi);
	getche();
}

void captura()
{
	system("cls");
	for (int i=0; i<=99;i++)
	{
		printf("Indica el valor de la posici%cn %d : ",162,i);
		scanf("%f",&a[i]);
		if(a[i]==0)
		{
			n=i;
			break;
		}
	}
}

void mostrar()
{
	system("cls");
	printf("Los valores capturados son : \n");
	
	for(int i=0; i<n;i++)
	{
		printf("%.2f\n",a[i]);
	}
	getche();
}

float promedio()
{
	float s=0,prom;
	for (int i=0;i<n;i++) s=s+a[i];
	prom=s/n;
	return (prom);
}

void desv_esta()
{
	float de,z=promedio(),s=0;
	for(int i=0;i<=n;i++) s=s+pow(a[i]-z,2);
	de=sqrt(s/n);
	system("cls");
	printf("La desviacion estandar es: %.2f",de);
	getche();
}

void moda()
{
	float pasados[100];
	int frecuencia[100],cont_pasados=0,existe,may;
	
	for(int i=0;i<n;i++)
	{
		existe=0;
		for(int j=0;j<cont_pasados;j++)
		{
			if (a[i]==pasados[j])
			{
				frecuencia[j]=frecuencia[j]+1;
				existe=1;
				break;
			}
		}
	
		if(existe==0)
		{
			pasados[cont_pasados]=a[i];
			frecuencia[cont_pasados]=1;
			cont_pasados++;
		}
	}
	may=frecuencia[0];
	for (int i=0;i<cont_pasados;i++) if (frecuencia[i]>may) may=frecuencia[i];
	
	system("cls");
	printf("Los valores de la moda son : \n");
	
	for (int i=0;i<cont_pasados;i++) if (frecuencia[i]==may) printf("%.2f\n",pasados[i]);
	getche();
}

void menu()
{
	char op;
	while(op!=char(27))
	{
		system("cls");
		printf("a) Capturar N%cmeros\n",163);
		printf("b) Mostrar valores Capturados\n");
		printf("c) Media/Promedio\n");
		printf("d) Mayor\n");
		printf("e) Menor\n");
		printf("f) Mediana\n");
		printf("g) Moda\n");
		printf("h) Desviaci%cn Est%cndar\n",162,160);
		printf("i) Menor a mayor\n");
		printf("j) Mayor a menor\n");
		printf("\nIndica la opci%cn : ",162); op=getche();
		
		if(((op<'a')||(op>'j'))&&(op!=char(27)))
		{
			printf("\nERROR, opci%cn fuera de rango...\n",162);
			getche();
		}
		else
		{
			if (op=='a') captura();
			if (op=='b') mostrar();
			if (op=='c') 
			{
				float p;
				p=promedio();
				printf("\nEl promedio es: %f",p);
				getche();
			}
			if (op=='d') mayor();
			if (op=='e') menor();
			if (op=='f') mediana();
			if (op=='g') moda();
			if (op=='h') desv_esta();
			if (op=='i') ordena();
			if (op=='j') inversa();
		}
	}
}


main()
{
	menu();
}
