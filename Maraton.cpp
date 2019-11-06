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

int mat[11],n;
float cal1[11],cal2[11],cal3[11];


void matricula()
{
	
		
		for(int i=0;i<=9;i++)
		{
			int x=i+1,n=9;
			printf("***** CAPTURA CALIFICACIONES DEL ALUMNO %d *****\n",x);
			printf("Indique la matricula del alumno: "); scanf("%d",&mat[i]);
		
			if((mat[i]>1999) || (mat[i]<1000) && (mat[i]!=0))
			{
				printf("Error matricula fuera de rango\n");
				getche();
				i--;
			}
			
			if(mat[i]==0)
				{	
					break;
					n=i-1;
				}
			
			for(int j=1;j<=n;j++)
			{
				if(mat[j]==mat[j-1])
				{
					printf("Error, matricula ya fue registrada\n");
				}
			}
		}
	
}
	
	

	
	



		


		
main()
{
	matricula();
	
}
