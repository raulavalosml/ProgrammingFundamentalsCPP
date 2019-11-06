//Daniel Alejandro Villegas Romero A01365286
//Raúl Iván Ávalos Muñoz Ledo A01364940
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
# include <fstream>

using namespace std;

int op,x,m,a,z,n,q;
float s;
char cuenta[5],falso[5],nombre[21],ap[21],am[21],sucursal[5],rfc[11],jose[5],jose_2[5],maria[6],maria_2[6],nn[3],mm[3],aaaa[5],busca_cuenta[5],busca_rfc[11];
char busca_ap[21],nom_suc[21],suc_val[5],busca_suc[5],cuenta_val[5],cuentas[5],sucursales[5];

void listar_sucursales()
{
	int ren=7;
	ifstream oki;
	oki.open("sucursales.txt",ios::in);
	system("cls");

	if (oki.fail())
	{
		gotoxy(10,20); printf("Error, el archivo no existe...");
		getche();
		system("cls");
		
	}
	else
	{
		gotoxy(10,5); printf("Clave Sucursal      Nombre Sucursal");
		//                    1234                123456789/123456789/
		//                    123456789/123456789/123456789/123456
		gotoxy(10,6); printf("----------------------------------------");
		while (!oki.eof())
		{
			oki >>sucursal >>nom_suc;
			if (!oki.eof()) 
			{
				gotoxy(10,ren);  printf("%s",sucursal);
				gotoxy(30,ren); printf("%s",nom_suc);
				ren++;			
			}		
		}
			getche();
	}
	
	oki.close();	

}

void registro()
{
	ofstream archivo;
	archivo.open("clientes.txt",ios::app);
	archivo <<cuenta <<" " <<nombre <<" " <<ap <<" " <<am <<" " <<n <<" " <<m <<" " <<a <<" " <<s <<" " <<sucursal <<" " <<rfc <<"\n";
	archivo.close();
}

void altas()
{
	gets(falso);
	//Numero de cuenta
	x=0;
	while((x>4)||(x<4))
	{
		
		system("cls");
		gotoxy(10,5); printf("Coloca el numero de cuenta: "); gets(cuenta);
		strcpy(cuenta_val,cuenta);
		
				//PRUEBA
		ifstream oki;
		oki.open("clientes.txt",ios::in);
		x=0;
		int z=0;
		if (oki.fail())
		{	
			gotoxy(10,20); printf("Error, el archivo no existe...");
			getche();
			system("cls");
		}
		else
		{
		
			while (!oki.eof())
			{
				oki >>cuentas >>nombre >>ap >>am >>n >>m >>a >>s >>sucursal >>rfc;
				if ((!oki.eof()) && (strcmp(cuentas,cuenta_val)==0))
				{	
					z=1;
				}	
			}
			oki.close();
		
			if(z==0)
			{			
				x=4;
			}		
			else
			{
				x=0;
				gotoxy(10,20); printf("Error, esa cuenta ya existe...");
				getche();
			}

					
		}	
		//FIN DE PRUEBA

		
		q=strlen(cuenta);
		if ((q>4) || (q<4))
		{
			gotoxy(10,20); printf("Error, debe de tener entre 4 caracteres...");
			getche();
			x=0;
			gotoxy(10,20); printf("                                          ");
			
		}
		if (cuenta[0]!='C')
		{
			x=0;
			gotoxy(10,20); printf("Error, la primer caracter debe ser C...");
			getche();
			gotoxy(10,20); printf("                                       ");
		}
	
		if ((cuenta[1]!='0') && (cuenta[1]!='1') && (cuenta[1]!='2') && (cuenta[1]!='3') && (cuenta[1]!='4') && (cuenta[1]!='5') && (cuenta[1]!='6') && (cuenta[1]!='7') && (cuenta[1]!='8') && (cuenta[1]!='9'))
		{
			{
				x=0;
				gotoxy(10,20); printf("Error, el segundo caracter debe de ser un digito...");
				getche();
				gotoxy(10,20); printf("                                                       ");
				
			}
		}

		if ((cuenta[2]!='0') && (cuenta[2]!='1') && (cuenta[2]!='2') && (cuenta[2]!='3') && (cuenta[2]!='4') && (cuenta[2]!='5') && (cuenta[2]!='6') && (cuenta[2]!='7') && (cuenta[2]!='8') && (cuenta[2]!='9'))
		{
			{
				x=0;
				gotoxy(10,20); printf("Error, el penultimo caracter debe de ser un digito...");
				getche();
				gotoxy(10,20); printf("                                                       ");
				
			}
		}

		if ((cuenta[3]!='0') && (cuenta[3]!='1') && (cuenta[3]!='2') && (cuenta[3]!='3') && (cuenta[3]!='4') && (cuenta[3]!='5') && (cuenta[3]!='6') && (cuenta[3]!='7') && (cuenta[3]!='8') && (cuenta[3]!='9'))
		{	
			{
				x=0;
				gotoxy(10,20); printf("Error, el ultimo caracter debe de ser un digito...");
				getche();
				gotoxy(10,20); printf("                                                       ");
				
			}
		}	
		
	}
	gotoxy(10,20); printf("Numero de cuenta aceptado...");
	getche();
	system("cls");	

	//nombre
	x=0;
	while ((x>20)||(x<1))
	{
		system("cls");
		gotoxy(10,5); printf("Coloca el nombre: "); gets(nombre);
		x=strlen(nombre);
		if ((x>20)||(x<1))
		{
			gotoxy(10,20); printf("Error, el nombre debe de tener entre 1 y 20 caracteres...");
			getche();
			system("cls");
			x=0;
		}
		
		for(int i=0;i<strlen(nombre);i++)
		{
			if (nombre[i]==' ')
			{
				nombre[i]='_';
			}
		}
		
	}
	gotoxy(10,20); printf("Nombre aceptado...");
	getche();
	system("cls");
	
	//apellido paterno
	x=0;
	while ((x>20)||(x<2))
	{
		system("cls");
		gotoxy(10,5); printf("Coloca el apellido paterno: "); gets(ap);
		x=strlen(ap);
		if ((x>20)||(x<2))
		{
			gotoxy(10,20); printf("Error, el apellido paterno debe de tener entre 2 y 20 caracteres...");
			getche();
			system("cls");
			x=0;
		}
		
		for(int i=0;i<strlen(ap);i++)
		{
			if (ap[i]==' ')
			{
				ap[i]='_';
			}
		}
	}
	gotoxy(10,20); printf("Apellido paterno aceptado aceptado...");
	getche();
	system("cls");
	//apellido materno
	x=0;
	while ((x>20)||(x<1))
	{
		system("cls");
		gotoxy(10,5); printf("Coloca el apellido materno: "); gets(am);
		x=strlen(am);
		if ((x>20)||(x<1))
		{
			gotoxy(10,20); printf("Error, el apellido materno debe de tener entre 1 y 20 caracteres...");
			getche();
			system("cls");
			x=0;
		}
		
		for(int i=0;i<strlen(am);i++)
		{
			if (am[i]==' ')
			{
				am[i]='_';
			}
		}
	}
	gotoxy(10,20); printf("Apellido materno aceptado...");
	getche();
	system("cls");
	
	//dia de nacimiento
	n=0;
	while ((n<1)||(n>31))
	{
		gotoxy(10,5); printf("Coloca el dia de nacimiento: "); scanf("%d",&n);
		
		if ((n<1)||(n>31))
		{
			gotoxy(10,20); printf("Error, el dia de nacimiento va de 1 a 31...");
			getche();
			system("cls");
		}
		else
		{
			if (n<10)
			{
				itoa(n,nn,10);
				rfc[8]='0';
				rfc[9]=nn[0];
			}
			else
			{
				itoa(n,nn,10);
				rfc[8]=nn[0];
				rfc[9]=nn[1];
			}
		}
	}
	gotoxy(10,20); printf("Dia de nacimiento aceptado...");
	getche();
	system("cls");
	
	//mes de nacimiento
	m=0;
	while ((m<1)||(m>12))
	{
		gotoxy(10,5); printf("Coloca el mes de nacimiento: "); scanf("%d",&m);
		if ((m<1)||(m>12))
		{
			gotoxy(10,20); printf("Error, el mes de nacimiento va de 1 a 12...");
			getche();
			system("cls");
		}
		else
		{
			if (m<10)
			{
				itoa(m,mm,10);
				rfc[6]='0';
				rfc[7]=mm[0];
			}
			else
			{
				itoa(m,mm,10);
				rfc[6]=mm[0];
				rfc[7]=mm[1];
			}
		}
	}
	gotoxy(10,20); printf("Mes de nacimiento aceptado...");
	getche();
	system("cls");
	
	//año de nacimiento
	a=0;
	while (a<=1900)
	{
		gotoxy(10,5); printf("Coloca el a%co de nacimiento: ",164); scanf("%d",&a);
		if (a<=1900)
		{
			gotoxy(10,20); printf("Error, el a%co de nacimiento debe ser superior a 1900...",164);
			getche();
			system("cls");
		}
		else
		{
			itoa(a,aaaa,10);
			rfc[4]=aaaa[2];
			rfc[5]=aaaa[3];
		}
	}
	gotoxy(10,20); printf("Anio de nacimiento aceptado...");
	getche();
	system("cls");
	gets(falso);
	
	//saldo
	s=-1;
	while (s<1)
	{
		gotoxy(10,5); printf("Coloca el saldo del usuario: "); scanf("%f",&s);
		if (s<1)
		{
			gotoxy(10,20); printf("Error, el saldo debe de ser positivo...");
			getche();
			system("cls");
		}
	}
	gotoxy(10,20); printf("Saldo del usuario aceptado...");
	getche();
	system("cls");
	gets(falso);
	
	//sucursal
	x=0;
	while((x>4)||(x<4))
	{
		
		system("cls");
		gotoxy(10,5); printf("Coloca el numero de sucursal: "); gets(sucursal);
		strcpy(suc_val,sucursal);
		x=strlen(sucursal);
		if ((x>4) || (x<4))
		{
			gotoxy(10,20); printf("Error, debe de tener entre 4 caracteres...");
			getche();
			gotoxy(10,20); printf("                                          ");
			
		}
		if (sucursal[0]!='S')
		{
			x=0;
			gotoxy(10,20); printf("Error, la primer caracter debe ser S...");
			getche();
			gotoxy(10,20); printf("                                       ");
		}
	
		if ((sucursal[1]!='0') && (sucursal[1]!='1') && (sucursal[1]!='2') && (sucursal[1]!='3') && (sucursal[1]!='4') && (sucursal[1]!='5') && (sucursal[1]!='6') && (sucursal[1]!='7') && (sucursal[1]!='8') && (sucursal[1]!='9'))
		{
			{
				x=0;
				gotoxy(10,20); printf("Error, el segundo caracter debe de ser un digito...");
				getche();
				gotoxy(10,20); printf("                                                       ");
				
			}
		}

		if ((sucursal[2]!='0') && (sucursal[2]!='1') && (sucursal[2]!='2') && (sucursal[2]!='3') && (sucursal[2]!='4') && (sucursal[2]!='5') && (sucursal[2]!='6') && (sucursal[2]!='7') && (sucursal[2]!='8') && (sucursal[2]!='9'))
		{
			{
				x=0;
				gotoxy(10,20); printf("Error, el penultimo caracter debe de ser un digito...");
				getche();
				gotoxy(10,20); printf("                                                       ");
				
			}
		}

		if ((sucursal[3]!='0') && (sucursal[3]!='1') && (sucursal[3]!='2') && (sucursal[3]!='3') && (sucursal[3]!='4') && (sucursal[3]!='5') && (sucursal[3]!='6') && (sucursal[3]!='7') && (sucursal[3]!='8') && (sucursal[3]!='9'))
		{	
			{
				x=0;
				gotoxy(10,20); printf("Error, el ultimo caracter debe de ser un digito...");
				getche();
				gotoxy(10,20); printf("                                                       ");
				
			}
		}
		//prueba

		ifstream oki;
		oki.open("sucursales.txt",ios::in);
		x=0;
		int y=0;

		if (oki.fail())
		{	
			gotoxy(10,20); printf("Error, el archivo no existe...");
			getche();
			system("cls");
		}
		else
		{
			while (!oki.eof())
			{
				oki >>sucursales >>nom_suc; 
				if ((!oki.eof()) && (strcmp(sucursales,suc_val)==0))
				{		
					y=1;
				}	
			}	
			oki.close();
	
			if(y==0)
			{
				gotoxy(10,20); printf("Error, esa sucursal no existe...");
				x=0;
				getche();
			}			
			else
			{
				x=4;
			}
	
	 //termina prueba			
		}
	

	}
	gotoxy(10,20); printf("Numero de sucursal aceptado...");
	getche();
	system("cls");	
	
	//RFC

	rfc[0]=ap[0];
	
	for (int i=1;i<strlen(ap);i++)
	{
		if ((ap[i]=='a') || (ap[i]=='e') || (ap[i]=='i') || (ap[i]=='o') || (ap[i]=='u') || (ap[i]=='A') || (ap[i]=='E') || (ap[i]=='I') || (ap[i]=='O') || (ap[i]=='U')) 	
		{
			rfc[1]=ap[i];
			break;		
		}
		else
		{
			rfc[1]='?';
		}
	}
	
	rfc[2]=am[0];
	
	if ((strnicmp(nombre,jose,4)==0) || (strnicmp(nombre,jose_2,4)==0) || (strnicmp(nombre,maria,5)==0) || (strnicmp(nombre,maria_2,5)==0))
	{
		for(int i=0;z<strlen(nombre);i++)
		{
			if (nombre[i]=='_')
			{
				z=i+1;
				break;
			}
		}
		if(nombre[z]=='_')
		{
			rfc[3]=nombre[0];
		}
		else
		{
			rfc[3]=nombre[z];	
		}
		
			if ((strcmp(nombre,jose)==0)||(strcmp(nombre,jose_2)==0))
		{
			rfc[3]='J';
		}
		if ((strcmp(nombre,maria)==0)||(strcmp(nombre,maria_2)==0))
		{
			rfc[3]='M';
		}
	}
	else
	{
		rfc[3]=nombre[0];
	}
	
	strupr(rfc);
	gotoxy(10,20); printf("El RFC es: ");
	for(int i=0;i<=9;i++)
	{
		printf("%c",rfc[i]);
	}
	getche();
	registro();
	gotoxy(10,20); printf("Registro finalizado...");
	getche();
	
}

void consulta_cuenta()
{
	gets(falso);
	system("cls");
	gotoxy(10,5); printf("Indica el numero de cuenta a consultar: "); gets(busca_cuenta);
	ifstream oki;
	oki.open("clientes.txt",ios::in);
	system("cls");
	gotoxy(10,20); printf("Error, ese numero de cuenta no ha sido registrado...");
	
	if (oki.fail())
	{
		gotoxy(10,20); printf("Error, el archivo no existe...");
		getche();
		system("cls");
		
	}
	else
	{
		while (!oki.eof())
		{
			
			oki >>cuentas >>nombre >>ap >>am >>n >>m >>a >>s >>sucursal >>rfc;
			for(int i=0;i<strlen(nombre);i++)
			{
				if(nombre[i]=='_')
				{
					nombre[i]=' ';
				}
			}
			for(int i=0;i<strlen(ap);i++)
			{
				if(ap[i]=='_')
				{
					ap[i]=' ';
				}
			}
			for(int i=0;i<strlen(am);i++)
			{
				if(am[i]=='_')
				{
					am[i]=' ';
				}
			}
			
			if ((!oki.eof()) && (strcmp(cuentas,busca_cuenta)==0))
			{
				gotoxy(10,20); printf("                                                                             ");
				gotoxy(1,5); printf("Cuenta Nombre           A. Paterno       A. Materno      DD/MM/AAAA Saldo     Sucursal  RFC");
				//                   12345  123456789/12345  123456789/12345  123456789/12345 11/22/1234 12345678  1234      123456789/
				//                  123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789
				gotoxy(1,6); printf("--------------------------------------------------------------------------------------------------");
	
				gotoxy(1,7);  printf("%s",cuentas);
				gotoxy(8,7);  printf("%s",nombre);
				gotoxy(25,7); printf("%s",ap);
				gotoxy(42,7); printf("%s",am);
				gotoxy(58,7); printf("%.2d/%.2d/%d",n,m,a);
				gotoxy(69,7); printf("%.2f",s);
				gotoxy(79,7); printf("%s",sucursal);
				gotoxy(89,7); printf("%s",rfc);
			}
		}
		oki.close();
		getche();

	}
	
}

void consulta_rfc()
{
	gets(falso);
	system("cls");
	gotoxy(10,5); printf("Indica el RFC a consultar: "); gets(busca_rfc);
	ifstream oki;
	oki.open("clientes.txt",ios::in);
	system("cls");
	gotoxy(10,20); printf("Error, ese RFC no ha sido registrado...");
	
	if (oki.fail())
	{
		gotoxy(10,20); printf("Error, el archivo no existe...");
		getche();
		system("cls");
		
	}
	else
	{
		while (!oki.eof())
		{
			oki >>cuentas >>nombre >>ap >>am >>n >>m >>a >>s >>sucursal >>rfc;
			for(int i=0;i<strlen(nombre);i++)
			{
				if(nombre[i]=='_')
				{
					nombre[i]=' ';
				}
			}
			for(int i=0;i<strlen(ap);i++)
			{
				if(ap[i]=='_')
				{
					ap[i]=' ';
				}
			}
			for(int i=0;i<strlen(am);i++)
			{
				if(am[i]=='_')
				{
					am[i]=' ';
				}
			}
			
			if ((!oki.eof()) && (strcmp(rfc,busca_rfc)==0))
			{
				gotoxy(10,20); printf("                                                                             ");
				gotoxy(1,5); printf("Cuenta Nombre           A. Paterno       A. Materno      DD/MM/AAAA Saldo     Sucursal  RFC");
				//                   12345  123456789/12345  123456789/12345  123456789/12345 11/22/1234 12345678  1234      123456789/
				//                  123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789
				gotoxy(1,6); printf("--------------------------------------------------------------------------------------------------");
	
				gotoxy(1,7);  printf("%s",cuentas);
				gotoxy(8,7);  printf("%s",nombre);
				gotoxy(25,7); printf("%s",ap);
				gotoxy(42,7); printf("%s",am);
				gotoxy(58,7); printf("%.2d/%.2d/%d",n,m,a);
				gotoxy(69,7); printf("%.2f",s);
				gotoxy(79,7); printf("%s",sucursal);
				gotoxy(89,7); printf("%s",rfc);			
			}
		}
		oki.close();
		getche();
	}
}

void lista_apellido()
{
	int ren=7;
	gets(falso);
	system("cls");
	gotoxy(10,5); printf("Indica el apellido a listar: "); gets(busca_ap);
	ifstream oki;
	oki.open("clientes.txt",ios::in);
	system("cls");
	gotoxy(10,20); printf("Error, ese apellido no ha sido registrado...");
	
	if (oki.fail())
	{
		gotoxy(10,20); printf("Error, el archivo no existe...");
		getche();
		system("cls");
		
	}
	else
	{
		while (!oki.eof())
		{
			oki >>cuentas >>nombre >>ap >>am >>n >>m >>a >>s >>sucursal >>rfc;
			for(int i=0;i<strlen(nombre);i++)
			{
				if(nombre[i]=='_')
				{
					nombre[i]=' ';
				}
			}
			for(int i=0;i<strlen(ap);i++)
			{
				if(ap[i]=='_')
				{
					ap[i]=' ';
				}
			}
			for(int i=0;i<strlen(am);i++)
			{
				if(am[i]=='_')
				{
					am[i]=' ';
				}
			}
			
			if ((!oki.eof()) && (strcmp(ap,busca_ap)==0))
			{
				
				gotoxy(10,20); printf("                                                                             ");
				gotoxy(1,5); printf("Cuenta Nombre           A. Paterno       A. Materno      DD/MM/AAAA Saldo     Sucursal  RFC");
				//                   12345  123456789/12345  123456789/12345  123456789/12345 11/22/1234 12345678  1234      123456789/
				//                  123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789
				gotoxy(1,6); printf("--------------------------------------------------------------------------------------------------");
	
				gotoxy(1,ren);  printf("%s",cuentas);
				gotoxy(8,ren);  printf("%s",nombre);
				gotoxy(25,ren); printf("%s",ap);
				gotoxy(42,ren); printf("%s",am);
				gotoxy(58,ren); printf("%.2d/%.2d/%d",n,m,a);
				gotoxy(69,ren); printf("%.2f",s);
				gotoxy(79,ren); printf("%s",sucursal);
				gotoxy(89,ren); printf("%s",rfc);
				ren++;
			}
		}
		oki.close();
		getche();
	}
}

void consulta_sucursal_clave()
{
	gets(falso);
	system("cls");
	gotoxy(10,5); printf("Coloca la clave de la sucursal a consultar: "); gets(busca_suc);
	system("cls");
	ifstream oki;
	oki.open("sucursales.txt",ios::in);
	

	int r=0;
	if (oki.fail())
	{
		gotoxy(10,20); printf("Error, el archivo no existe...");
		getche();
		system("cls");
		
	}
	else
	{
		while (!oki.eof())
		{
			
			
			oki >>sucursales >>nom_suc;
	
			//else
			//{
			//	gotoxy(10,20); printf("Error, esa clave de sucursal no existe...");
			//	getche();
			//	gotoxy(10,20); printf("                                         ");
	//		oki.close();
			if (strcmp(busca_suc,sucursales)==0)
			{
				r=1;
				oki.close();
			}	
			
			//	break;			
			//}
		}
	}
		
		if(r==1)
		{
				gotoxy(10,5); printf("Clave Sucursal      Nombre Sucursal");
				//                    1234                123456789/123456789/
				//                    123456789/123456789/123456789/123456
				gotoxy(10,6); printf("----------------------------------------");
		
				gotoxy(10,7);  printf("%s",sucursales);
				gotoxy(30,7);  printf("%s",nom_suc);
				getche();	
		}
		
		if(r==0)
		{
			gotoxy(10,20); printf("ERROR, no exisre esa sucursal...");
			getche();
		}
}

void saldo_institucion()
{
	int ren=7;
	float sa=0;
	gets(falso);
	system("cls");
	ifstream oki;
	oki.open("clientes.txt",ios::in);
	
	if (oki.fail())
	{
		gotoxy(10,20); printf("Error, el archivo no existe...");
		getche();
		system("cls");
		
	}	
	else
	{
		while (!oki.eof())
		{
			oki >>cuentas >>nombre >>ap >>am >>n >>m >>a >>s >>sucursal >>rfc;
			for(int i=0;i<strlen(nombre);i++)
			{
				if(nombre[i]=='_')
				{
					nombre[i]=' ';
				}
			}
			for(int i=0;i<strlen(ap);i++)
			{
				if(ap[i]=='_')
				{
					ap[i]=' ';
				}
			}
			for(int i=0;i<strlen(am);i++)
			{
				if(am[i]=='_')
				{
					am[i]=' ';
				}
			}
			
			if (!oki.eof()) 
			{
				gotoxy(1,5); printf("Cuenta Nombre           A. Paterno       A. Materno      DD/MM/AAAA Saldo     Sucursal  RFC");
				//                   12345  123456789/12345  123456789/12345  123456789/12345 11/22/1234 12345678  1234      123456789/
				//                  123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789
				gotoxy(1,6); printf("--------------------------------------------------------------------------------------------------");
	
				gotoxy(1,ren);  printf("%s",cuentas);
				gotoxy(8,ren);  printf("%s",nombre);
				gotoxy(25,ren); printf("%s",ap);
				gotoxy(42,ren); printf("%s",am);
				gotoxy(58,ren); printf("%.2d/%.2d/%d",n,m,a);
				gotoxy(69,ren); printf("%.2f",s);
				gotoxy(79,ren); printf("%s",sucursal);
				gotoxy(89,ren); printf("%s",rfc);
				ren++;
				sa=sa+s;
			}
		}
	}
	oki.close();
	gotoxy(10,ren+1);printf("El saldo acumulado de la institucion es: %.2f",sa);
	getche();
}

void saldo_sucursal()///////((((
{
	int ren=7;
	float sa=0;
	gets(falso);
	system("cls");
	gotoxy(10,5); printf("Indica la sucursal a obtener su saldo acumulado: "); gets(busca_suc);
	system("cls");
	ifstream oki;
	oki.open("clientes.txt",ios::in);
		
	int w=0;	
	if (oki.fail())
	{
		gotoxy(10,20); printf("Error, el archivo no existe...");
		getche();
		system("cls");
		
	}
	else
	{
		while (!oki.eof())
		{
			
			oki >>cuentas >>nombre >>ap >>am >>n >>m >>a >>s >>sucursal >>rfc;
			for(int i=0;i<strlen(nombre);i++)
			{
				if(nombre[i]=='_')
				{
					nombre[i]=' ';
				}
			}
			for(int i=0;i<strlen(ap);i++)
			{
				if(ap[i]=='_')
				{
					ap[i]=' ';
				}
			}
			for(int i=0;i<strlen(am);i++)
			{
				if(am[i]=='_')
				{
					am[i]=' ';
				}
			}
			
			if ((!oki.eof()) && (strcmp(sucursal,busca_suc)==0))
			{
				gotoxy(1,5); printf("Cuenta Nombre           A. Paterno       A. Materno      DD/MM/AAAA Saldo     Sucursal  RFC");
				//                   12345  123456789/12345  123456789/12345  123456789/12345 11/22/1234 12345678  1234      123456789/
				//                  123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789/123456789
				gotoxy(1,6); printf("--------------------------------------------------------------------------------------------------");
	
				gotoxy(1,ren);  printf("%s",cuentas);
				gotoxy(8,ren);  printf("%s",nombre);
				gotoxy(25,ren); printf("%s",ap);
				gotoxy(42,ren); printf("%s",am);
				gotoxy(58,ren); printf("%.2d/%.2d/%d",n,m,a);
				gotoxy(69,ren); printf("%.2f",s);
				gotoxy(79,ren); printf("%s",sucursal);
				gotoxy(89,ren); printf("%s",rfc);			
				ren++;
				sa=sa+s;
				w=1;
			}
		}
	}
	oki.close();
	gotoxy(10,ren+1);printf("El saldo acumulado de la sucursal es: %.2f",sa);
	if(w!=1)
	{
		system("cls");
		gotoxy(10,20); printf("Error, esta sucursal no tiene clientes...");
	}
	
	getche();
}

void menu()
{
	gotoxy(10,5);  printf("1) Altas de clientes");
	gotoxy(10,6);  printf("2) Consulta de clientes por cuenta");
	gotoxy(10,7);  printf("3) Consulta de clientes por RFC");
	gotoxy(10,8);  printf("4) Listado de clientes por apellido paterno");
	gotoxy(10,9);  printf("5) Reporte acumulado de saldos de la instituci%cn",162);
	gotoxy(10,10); printf("6) Reporte acumulado de saldos de una sucursal");
	gotoxy(10,11); printf("7) Consulta de sucursales por clave");
	gotoxy(10,12); printf("8) Listar todas las sucursales");
	gotoxy(10,13); printf("9) Terminar");
	gotoxy(10,15); printf("Seleccione una opci%cn: ",162); scanf("%d",&op);

	if (op==1) altas();
	if (op==2) consulta_cuenta();
	if (op==3) consulta_rfc();
	if (op==4) lista_apellido();
	if (op==5) saldo_institucion();
	if (op==6) saldo_sucursal();
	if (op==7) consulta_sucursal_clave();
	if (op==8) listar_sucursales();
	if ((op>9)||(op<1))
	{
		system("cls");
		gotoxy(10,20); printf("Error, el rango de opciones va de 1 a 9...");
		getche();
		gotoxy(10,20); printf("                                          ");
	}		
}

main()
{
	maria[0]='M'; maria[1]='a'; maria[2]='r'; maria[3]='i';	maria[4]='a';
	maria_2[0]='M'; maria_2[1]='a'; maria_2[2]='r'; maria_2[3]=char(161);	maria_2[4]='a';
	jose[0]='J'; jose[1]='o'; jose[2]='s'; jose[3]='e';
	jose_2[0]='J'; jose_2[1]='o'; jose_2[2]='s'; jose_2[3]=char(130);
	
	op=0;
	while(op!=9)
	{
		system("cls");
		menu();

	}

}


