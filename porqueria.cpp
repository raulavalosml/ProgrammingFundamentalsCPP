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

int mat[11],m,n,i,y;
float cal1[11],cal2[11],cal3[11];

void calificacion()
{
			cal1[i]=-1;
			while ((cal1[i]>100) || (cal1[i]<0))
			{
				printf("Indique la calificacion 1: "); scanf("%f",&cal1[i]);
				if ((cal1[i]>100) || (cal1[i]<0))
				{
					printf("Error, la calificacion va de 0 a 100\n");
					getche();
				}
			}
			
			cal2[i]=-1;
			while ((cal2[i]>100) || (cal2[i]<0))
			{
				printf("Indique la calificacion 2: "); scanf("%f",&cal2[i]);
				if ((cal2[i]>100) || (cal2[i]<0))
				{
					printf("Error, la calificacion va de 0 a 100\n");
					getche();
				}
			}
			
			cal3[i]=-1;
			while ((cal3[i]>100) || (cal3[i]<0))
			{
				printf("Indique la calificacion 3: "); scanf("%f",&cal3[i]);
				if ((cal3[i]>100) || (cal3[i]<0))
				{
					printf("Error, la calificacion va de 0 a 100\n");
					getche();
				}
			}
			
	
	
	
}


void tabla()
{
		system("cls");
		printf("Matricula 	Cali1	Cali2	Cali3	Promedio\n");
		printf("----------------------------------------------------------");
	
	for(int i=0;i>n;i++)
	{
		printf("%d			%f		%f		%f					\n",mat[i],cal1[i],cal2[i],cal3[i]);
	}
}



void matricula()
{
			for(int i=0;i<=9;i++)
			{
				int x=i+1;
				printf("***** CAPTURA CALIFICACIONES DEL ALUMNO %d *****\n",x);
				printf("Indique la matricula del alumno: "); scanf("%d",&mat[i]);
				
				if((mat[i]>1999) || (mat[i]<1000)&&(mat[i]!=0))
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
				
				
						
				int z=i;
				if(z>=1)
				{
					for(int y=z-1;y>=n;y--)
					{
						if(mat[z]==mat[y])
						{
							printf("Error...matricula se repite...\n");
							getche();
							printf("***** CAPTURA CALIFICACIONES DEL ALUMNO %d *****\n",x);
							printf("Indique la matricula del alumno: "); scanf("%d",&mat[z]);
							
						}
					}
				
				}
				
				calificacion();
									
				
				
			}
	
		system("cls");
		printf("Matricula 	Cali1	Cali2	Cali3	Promedio\n");;
	for (int r=1;r<=y;r++)
		{
			printf("%d\n",mat[r]);
			//cal1[r],cal2[r],cal3[r]);
		}
		
}




main()
{
	matricula();
	
	
}
