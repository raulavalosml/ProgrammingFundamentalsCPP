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


void captura()
{
	int i,arr[10];
	
	i=0;
	arr[i]=0;

	while ((arr[i]>1000)||(arr[i]<1))
	{
		for(int i=0;i<=9;i=i+1)
		{
			gotoxy(10,(i*2)); printf("Coloca el valor de la posicion %d: ",i); scanf("%d",&arr[i]);
			
			
			if ((arr[i]>1000)||(arr[i]<1))
			{
				gotoxy(10,(i*2)+1); printf("ERROR, el rango va de 1 a 1000");
				getche();
				gotoxy(10,(i*2)+1);	printf("                              ");
				gotoxy(44,0+(i*2)); printf("      ");
			}
		}
	}
}

void menu()
{
	int op;
	
	gotoxy (10,10);  printf("Menu Inicial");
	gotoxy (10,11);  printf("1) Promedio");
	gotoxy (10,12);  printf("2) Numero Mayor");
	gotoxy (10,13);  printf("3) Numero Menor");
	gotoxy (10,14);  printf("4) Lista en secuencia de captura");
	gotoxy (10,15);  printf("5) Lista inversa de captura");
	gotoxy (10,16);  printf("6) Ver valor de una posicion determinada");
	gotoxy (10,17);  printf("7)Terminar");
	gotoxy (10,18);  printf("Coloca la opcion deseada: "); scanf("%d",&op);	
}

void promedio()
{
	int i,arr[10];
	float r;
	system("cls");
	gotoxy(10,5); ("Promedio");
	
	r=(arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]+arr[7]+arr[8]+arr[9]+arr[10])/10;
	
		gotoxy(10,22); printf("%d",r);
		getche();
}

main()
{
	captura();

	int op=0;
	while (op!=7)
	{
		menu();
	int op;
		if ((op>7)||(op<1))
		{
			gotoxy(10,10); printf("                ");
			gotoxy(10,10); printf("Error valor fuera de rango, va de 1 a 7...");
			getche();
		}
		if (op==1) 
		{
			promedio();
			getche();
		}
		
	}
	
	getche();
}
