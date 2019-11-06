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

char pal[31]; abc[26]; sh1[26];

void inicial()
{
	for(int i=0;i<=25)
}

void menu()
{
	char op;
	while (op!='d')
	{
		system("cls");
		printf("a) Indica la palbra\n");
		printf("b) De Normal a Shift 1\n");		
		printf("c) De Shift 1 a Normal\n");
		printf("d) Terminar\n");
		printf("\n\nIndica la opcion: "); op=getche();
		
		if(op>'')
	}
}
