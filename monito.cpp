#if defined(_WIN32) || defined(WIN32) // Windows-way ~
   #define WIN32_LEAN_AND_MEAN // para no incluir cosas innecesarias en windows.h
   #include <Windows.h>
   #define gotoxy(x,y) {COORD a;a.X = x; a.Y = y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);}
#else // Linux-Way =)
   #include <ncurses.h>
   #define gotoxy(x,y) move(x,y)
#endif
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	for(int i=1;i<=90;i++)
	{
		
		gotoxy(i,5); 	printf("*****");
		gotoxy(i,6);	printf("*o o*");
		gotoxy(i,7);	printf("* L *");
		gotoxy(i,8);	printf("*---*");
		gotoxy(i,9);	printf("*****");
		gotoxy(i,10);	printf("  *  ");
		gotoxy(i,11);	printf("  *  ");
		gotoxy(i,12);	printf("*****");
		
		if (i%2==0)
		{
			gotoxy(i,13);	printf("  *  ");
			gotoxy(i,14);	printf("  *  ");
			gotoxy(i,15);	printf("  *  ");
			gotoxy(i,16);	printf(" * * ");
			gotoxy(i,16);	printf("*   *");
		}
		else 
		{
			gotoxy(i,13);	printf("  *  ");
			gotoxy(i,14);	printf("  *  ");
			gotoxy(i,15);	printf("  *  ");
			gotoxy(i,16);	printf("  *  ");
			gotoxy(i,16);	printf("  *  ");
		}
		Sleep(100);
	if (i<90)
	{
		gotoxy(i,5); 	printf("     ");
		gotoxy(i,6);	printf("     ");
		gotoxy(i,7);	printf("     ");
		gotoxy(i,8);	printf("     ");
		gotoxy(i,9);	printf("     ");
		gotoxy(i,10);	printf("     ");
		gotoxy(i,11);	printf("     ");
		gotoxy(i,12);	printf("     ");
		gotoxy(i,13);	printf("     ");
		gotoxy(i,14);	printf("     ");
		gotoxy(i,15);	printf("     ");
		gotoxy(i,16);	printf("     ");
		gotoxy(i,16);	printf("     ");
	}
	
	}
	
		gotoxy(90,5); 	printf("*****");
		gotoxy(90,6);	printf("*- o*");
		gotoxy(90,7);	printf("* L *");
		gotoxy(90,8);	printf("*---*");
		gotoxy(90,9);	printf("*****");
		gotoxy(90,10);	printf("  *  ");
		gotoxy(90,11);	printf("  *  ");
		gotoxy(90,12);	printf("*****");
		gotoxy(90,13);	printf("  *  ");
		gotoxy(90,14);	printf("  *  ");
		gotoxy(90,15);	printf("  *  ");
		gotoxy(90,16);	printf(" * * ");
		gotoxy(90,16);	printf("*   *");
		getche();
		
	
	
}
