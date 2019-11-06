//Cadenas de caracteres
//COMO UN ARREGLO, SOLO SE DEBE DE DEJAR UN ESPACIO EXTRA PARA EL CARACTER DE CERRAR QUE SE PONE AUTOMATICO

# include <String.h>// S con mayuscula

char palabra[11]; //significa que caben 10 caracteres

strcopy(destino,origen); //destino es la cadena de caracter donde guardar la palabra de la cadena de caracter de origen ;
strcopy(destino,"palabra");//destino cadena de caracter donde guardar "lo que está entre comillas";

%s // significa cadena, viene de sentence;

con scanf("%s",&palabra);//no permite leer con espacios;
gets(palabra); //permite con espacios

strlen(palabra);//regresa un numero entero de la longitud de la cadena palabra;
strcmp(cad1,cad2);//regresa un valor igual a cero si ambas cadenas son iguales, si son diferentes da un valor diferente a cero;
strnicmp(cad1,cad2,n); //exactamente igual que strcmp pero n te dice cuantos caracteres comparar si es n=4 compara los primeros 4;
strupr(palabra); //todo lo de las cadenas se pasa a mayúscula;
strlwr(palabra); //todo lo de la cadena se pasa a minúscula;

