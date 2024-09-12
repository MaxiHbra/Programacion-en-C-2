/*Ejercicio 16: Dada una lista de N caracteres, los cuales pueden ser d�gitos y letras en min�sculas, y
sin caracteres de puntaci�n, se solicita mostrar la cantidad de d�gitos, de consonantes y de vocales se
encontraron en la lista.
Nota: Crear una funci�n que devuelva 1 si el car�cter es un digito, 0 si el car�cter es una consonante o
-1 si el car�cter es vocal, es similar a la funci�n del ejercicio 7.c). Activar la librer�a ctype.h para usar la
funci�n isdigt(char).*/
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
