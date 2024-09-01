/*Ejecutar el programa paso a paso con los siguientes valores NUM= -9781 y con NUM= 9713; revisar la
salida de la ejecución. ¿Se podría realizar alguna mejora? Luego eliminar la línea 2) y volver a compilar,
¿nota algún cambio?*/
#include <stdio.h>
#include <stdlib.h>
int Cuenta_dig_pares(int);
int main() {
	int NUM, CDIG;
	printf("\nIngrese un numero entero: ");
	scanf("%d",&NUM);
	NUM= abs(NUM);
	printf("\nMostrando rdo. de la función directamente: %d", Cuenta_dig_pares(NUM));
	printf("\n===> El mismo valor de otra forma <====");
	CDIG= Cuenta_dig_pares(NUM);
	printf("\nCantidad de digitos pares: %d", CDIG);
	printf("\nFIN DEL PROGRAMA");
	return 0;
	}
int Cuenta_dig_pares(int XNUM){
	int CD;
	CD=0;
	while(XNUM!=0){
	if((XNUM%2)==0) CD= CD+1;
	XNUM= XNUM/10;
	}
	return CD;
	} 
/*Se optimizaria de una mejor manera el programa si se utilizaria la funcion printf invocando al final a la funcion Cuenta_dig_pares, ahorrando la declaracion de
	variable.
	Si se borra la linea 2 (libreria stdlib) el programa no compila ya que se esta invocando una funcion "ABS" ubicada en la libreria nombrada en la liena 2*/
