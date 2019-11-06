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

char cta[16],pwd[16],letra;
int x,acceso;

void pide_cuenta()
{
	x=0;
	while ((x>15) || (x<5))
	{
		printf("Indica la cuenta: "); gets(cta);
		x=strlen(cta);
		if ((x>15) || (x<5))
		{
			printf("Error, cuenta tiene que tener de 5 a 15 caracteres...\n");
			getche();
		}
	}
}

void pide_pass()
{
	x=0;
	while ((x>15) || (x<5))
	{
		printf("Indica el password: "); 
		for(int i=0;i<=14;i++)
		{
			letra=getch();
			if (letra==char (13))
			{
				pwd[i]='\0';
				break;
			}
			else
			{
				pwd[i]=letra;
				printf("*");
			}
		}
		printf("\n");
		x=strlen(pwd);
		if((x>15)||(x<5))
		{
			printf("Error, la password debe de tener entre 5 y 15 caracteres...\n");
		}
	}
}

void valida_acceso()
{
	if((strcmp(cta,"A01364940")==0) && (strcmp(pwd,"010399")==0))
	{	
		printf("ACCESO PERMITIDO\n");
		acceso=1;
	}
	else
	{
		printf("Acesso denegado\n");
		getche();
	}
}

main()
{
	while (acceso==0)
	{
		system("cls");
		pide_cuenta();
		pide_pass();
		valida_acceso();
	
	}
	getche();
}
