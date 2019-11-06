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

int v[3],f[3],ct[6],l[4];

int menu()
{
	printf("\nVERDURAS\n");
	printf("Porcion baja en potasio    : "); scanf("%d",&v[0]);
	printf("Porcion moderada en potasio: "); scanf("%d",&v[1]);
	printf("Porcion alta en potasio    : "); scanf("%d",&v[2]);
	
	printf("\nFRUTAS\n");
	printf("Porcion baja en potasio    : "); scanf("%d",&f[0]);
	printf("Porcion moderada en potasio: "); scanf("%d",&f[1]);
	printf("Porcion alta en potasio    : "); scanf("%d",&f[2]);
	
	printf("\nCEREALES Y TUBERCULOS\n");	
	printf("Porcion sin grasa bajo en fosforo y bajo en sodio: "); scanf("%d",&ct[0]);
	printf("Porcion sin grasa bajo en fosforo y alto en sodio: "); scanf("%d",&ct[1]);
	printf("Porcion sin grasa alto en fosforo y bajo en sodio: "); scanf("%d",&ct[2]);
	printf("Porcion sin grasa alto en fosforo y alto en sodio: "); scanf("%d",&ct[3]);
	printf("Porcion con grasa bajo en fosforo y bajo en sodio: "); scanf("%d",&ct[4]);
	printf("Porcion con grasa bajo en fosforo y alto en sodio: "); scanf("%d",&ct[5]);
	
	printf("\nLEGUMINOSAS\n")
	printf("Porcion baja en fosforo y baja en sodio: "); scanf("%d",&l[0]);
	printf("Porcion baja en fosforo y alta en sodio: "); scanf("%d",&l[1]);
	printf("Porcion alta en fosforo y baja en sodio: "); scanf("%d",&l[2]);
	printf("Porcion alta en fosforo y alta en sodio: "); scanf("%d",&l[3]);
	
	printf("\nALIMENTOS DE ORIGEN ANIMAL\n")
	printf("MUY BAJOS EN GRASA:\n")
	printf("Porcion con bajo calcio, bajo fosforo y bajo sodio: ");
	printf("Porcion con bajo calcio, bajo fosforo y alto sodio: ");
	printf("Porcion con bajo calcio, alto fosforo y bajo sodio: ");
	printf("Porcion con bajo calcio, alto fosforo y alto sodio: ");
	printf("Porcion con alto calcio, bajo fosforo y bajo sodio: ");
	printf("Porcion con alto calcio, bajo fosforo y alto sodio: ");
	printf("Porcion con alto calcio, alto fosforo y bajo sodio: ");
	printf("Porcion con alto calcio, alto fosforo y alto sodio: ");
	printf("")


}

void mostrar()
{
	printf("la porcion de frutas bajas en potasio es: %d",v[1]);	
}

main()
{
	menu();
	mostrar();
	getche();
}
