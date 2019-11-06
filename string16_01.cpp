#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
# include <math.h>
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <String.h>

char op,pal[21];
int x;

void indicar()
{
	x=0;
	while((x>20)||(x<5))
	{
		system("cls");
		printf("Coloca la palabra: "); gets(pal);
		x=strlen(pal);
		if ((x>20) || (x<5))
		{
			printf("Error, debe de tener entre 5 y 20 caracteres...\n");
			getche();
		}
	}
	
	
}

void mostrar()
{
	system("cls");
	printf("La palabra seleccionada es: %s",pal);
	getche();
}

void reves()
{
	system("cls");
	printf("La palabra al reves es: ");
	for(int i=strlen(pal)-1; i>=0;i--)
	{
		printf("%c",pal[i]);
	}
	getche();
}

void posicion()
{
	int p, longitud=strlen(pal);
	
	system("cls");
	p=22;
	while ((p>longitud) || (p<0))
	{
		printf("Coloque la posicion deseada: "); scanf("%d",&p);
	
		if ((p>strlen(pal)) || (p<0))
		{
			printf("Error, el rango de la posicion va de 0 a %d",strlen(pal));
			getche();	
		}
			printf("La letra de la posicion %d es: %c",p,pal[p]); 
	}
	getche();
}

void vocales()
{
	system("cls");
	printf("Todas las vocales son: ");
	strlwr(pal);
	
	for (int i=0; i<strlen(pal)-1;i++)
	{
		if ((pal[i]=='a') || (pal[i]=='e') || (pal[i]=='i') || (pal[i]=='o') || (pal[i]=='u'))
		{
			printf("%c, ",pal[i]);
		}
	}
	getche();
}

void consonantes()
{
	system("cls");
	printf("Todas las consonantes son: ");
	strlwr(pal);
	
	for (int i=0; i<strlen(pal)-1;i++)
	{
		if ((pal[i]!='a') && (pal[i]!='e') && (pal[i]!='i') && (pal[i]!='o') && (pal[i]!='u'))
		{
			printf("%c, ",pal[i]);
		}
	}
	getche();
}

void menu()
{
	while (op!=char(27))
	{
		system("cls");
		printf("A) Indicar la palabra\n");
		printf("B) Mostrar la palabra\n");
		printf("C) Mostrar la palabra al reves\n");
		printf("D) Mostrar vocales\n");	
		printf("E) Mostrar consonantes\n");
		printf("F) Mostrar letra de una posicion\n");
		
		printf("\nColoca la opcion deseada: "); op=getche();
		
		if ((op>'f') || (op<'a') && (op>'F') || (op<'A') && (op!=char(27)))
		{
			printf("\nError, el rango va de A a F\n");
			getche();
		}
		else
		{
			if((op=='a') || (op=='A')) indicar();
			if((op=='b') || (op=='B')) mostrar();
			if((op=='c') || (op=='C')) reves();
			if((op=='d') || (op=='D')) vocales();
			if((op=='e') || (op=='E')) consonantes();
			if((op=='f') || (op=='F')) posicion();			
		}
	}
}

main()
{
	menu();
}
