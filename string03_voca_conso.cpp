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

//bvbbvbvvvbvbvbvbvbvbvbvbvbv

char pal[31];

main()
{
	printf("Indica la palabra: "); gets(pal);
	printf("\nLas vocales son: ");
	for (int i=0;i<strlen(pal);i++)
	{
		if ((pal[i]=='a') || (pal[i]=='e') || (pal[i]=='i') || (pal[i]=='o') || (pal[i]=='u')) 
		{
			printf("%c, ",pal[i]);
		}
	}
	printf("\nLas consonantes son: ");
	for(int i=0;i<strlen(pal);i++)
	{
		if ((pal[i]!='a') && (pal[i]!='e') && (pal[i]!='i') && (pal[i]!='o') && (pal[i]!='u')) 
		{
			printf("%c, ",pal[i]);
		}
	}
	getche();
	system("exit");
}
