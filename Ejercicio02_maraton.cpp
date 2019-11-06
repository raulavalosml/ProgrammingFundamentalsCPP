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

int mat[11];
float cal1[11],cal2[11],cal3[11];

void coloca()
{
	
	for(int i=0;i<=9;i++)
	{
		int x=i+1;
		printf("***** CAPTURA CALIFICACIONES DEL ALUMNO %d *****\n",x);
		printf("Indique la matricula del alumno: "); scanf("%d",&mat[i]);
	
		if((mat[i]>1999) || (mat[i]<1000) && (mat[i]!=0))
		{
			printf("Error matricula fuera de rango\n");
			getche();
			i--;
		}
		else
		{
			while ((cal1[i]>100) || (cal1[i]<0))
			{
				printf("Indica la calificacion 1: "); scanf("%f",&cal1[i]);
				if ((cal1[i]>100) || (cal1[i]<0))
				{
					printf("Error, la calificacion va de 1 a 100...\n");
					getche();
				}
			}
			 
			
			//printf("Indica la calificacion 2: "); scanf("%f",&cal2[i]);
			//printf("Indica la calificacion 3: "); scanf("%f",&cal3[i]);
		}
		
	}
}

main()
{
	coloca();
	getche();
}

