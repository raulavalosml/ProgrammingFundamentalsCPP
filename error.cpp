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
# include <windows.h>
# include <fstream>

char n[26], a[26],op;
int x,y;



void pide_nombre()
{
	x=0;
	while ((x>25) || (x<1))
	{
		printf("Coloca tu nombre: "); gets(n); strlwr(n);
		x=strlen(n);
		if ((x>25) || (x<1))
		{
			printf("Error, el nombre debe de tener entre 1 y 25 caracteres...\n");
			getche();
		}
	}
	
	if ((n[0]==char(164)) || (n[0]==char(165)))
	{
		n[0]='n';
	}
	
	if ((n[0]==char(160)) || (n[0]==char(181)))
	{
		n[0]='a';
	}
		
	if ((n[0]==char(130)) || (n[0]==char(144)))
	{
		n[0]='e';
	}
	
	if ((n[0]==char(161)) || (n[0]==char(214)))
	{
		n[0]='i';
	}
		
	if ((n[0]==char(162)) || (n[0]==char(224)))
	{
		n[0]='o';
	}
		
	if ((n[0]==char(163)) || (n[0]==char(233)))
	{
		n[0]='u';
	}
	
	if(n[0]==char(32))
	{
		n[0]='_';
	}	
}

void pide_apellido()
{
	y=0;
	while ((y>25) || (y<1))
	{
		printf("Coloca tu apellido: "); gets(a); strlwr(a);
		y=strlen(a);
			if ((y>25) || (y<1))
		{
			printf("Error, el apellido debe de tener entre 1 y 25 caracteres...\n");
			getche();
		}
	}
	

	
	for(int i=0;i<=strlen(a)-1;i++)
	{
	
		if ((a[i]==char(164)) || (a[i]==char(165)))
		{	
			a[i]=char(110);
		}
		
		if ((a[i]==char(160)) || (a[i]==char(181)))
		{
			a[i]='a';
		}
		
		if ((a[i]==char(130)) || (a[i]==char(144)))
		{
			a[i]='e';
		}
		
		if ((a[i]==char(161)) || (a[i]==char(214)))
		{
			a[i]='i';
		}
		
		if ((a[i]==char(162)) || (a[i]==char(224)))
		{
			a[i]='o';
		}
		
		if ((a[i]==char(163)) || (a[i]==char(233)))
		{
			a[i]='u';
		}
		
		if (a[i]==char(32))
		{
			a[i]=char(95);
		}
	}
}

void imprime()
{
	printf("El correo es: %c%s",n[0],a);
}


			
main()
{
	pide_nombre();
	pide_apellido();
	imprime();

}
