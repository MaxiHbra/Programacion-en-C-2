/*Ejercicio 16: Dada una lista de N caracteres, los cuales pueden ser dígitos y letras en minúsculas, y
sin caracteres de puntación, se solicita mostrar la cantidad de dígitos, de consonantes y de vocales se
encontraron en la lista.
Nota: Crear una función que devuelva 1 si el carácter es un digito, 0 si el carácter es una consonante o
-1 si el carácter es vocal, es similar a la función del ejercicio 7.c). Activar la librería ctype.h para usar la
función isdigt(char).*/
#include <stdio.h> 
#include <ctype.h>
char ingreso();
int verificar(char);
int main() {
	int n,i,contD,contV,contC;
	char x;
	contD=0;
	contV=0;
	contC=0;
	printf("\nPor favor ingrese N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x=ingreso();
		if(verificar(x)==1) contC++;
		else if(verificar(x)==0) contD++;
			else contV++;
	}
	printf("\nCantidad de digitos: %d\nCantidad de vocales: %d \nCantidad de consonantes: %d",contD,contV,contC);
	return 0;
}
char ingreso(){
	char c;
	do{
	printf("\nIngresar el caracter (digito o letra minuscula): ");
	fflush(stdin);
	scanf("%c",&c);
	}while(!((c>=48 && c<=57) || (c>=97 && c<=122)));
	return c;
}
int verificar(char c){
	int tipo;
	tipo=1;
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') tipo=-1;
	else if(c>=48 && c<=57) tipo=0;
	return tipo;
}
