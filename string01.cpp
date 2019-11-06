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
#include <String.h>

char pal[21],pal2[21];
main()
{
	printf("Indica la palabra : ");
	//scanf("%s",&pal);
	gets(pal);
	printf("La palabra es : %s\n",pal);
	printf("La palabra al rev%cs es: ",130,pal);
	for (int i=strlen(pal)-1;i>=0;i--)
	{
		printf("%c",pal[i]);
	}
	printf("\n");
	
	strcpy(pal2,"Maria");
	printf("la otra palabra es: %s",pal2);
	getche();
	
	if (strcmp(pal,pal2)==0) printf("\nIguales");
	else printf("\nDiferentes");
}
