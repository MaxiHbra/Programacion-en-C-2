/*Ejercicio 2: Dados un número real A, se solicita crear un menú que permita calcular y mostrar:
a) El Seno de A.
b) El logaritmo natural de A.
c) El valor absoluto de A.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int menu(void); /*modulo de tipo funcion para el menu de eleccion*/
int main(){
	float a;
	int opc;
	printf("\nPor favor ingresar A: ");
	scanf("%f",&a);
	do{ /*ciclo do while para iterar dependiendo del valor que retorne el menu*/
		opc=menu();
		switch(opc){ /*switch para mostrar la eleccion del usuario*/
		case 1 : printf("\nEl Seno de %f es: %f",a,sin(a)); break;
		case 2 : printf("\nEl logaritmo natural de %f es: %f",a,log(a)); break;
		case 3 : printf("\nEl valor absoluto de %f es: %d",a, abs(a)); break;
		default : printf("\nUsted salio del programa."); break;
		}
	}while(opc != 0);
	return 0;
}
int menu(){ 
	int opc;
	printf("\nIngresar 1 para calcular el seno de A.");
	printf("\nIngresar 2 para calcular el logaitmo natural de A.");
	printf("\nIngresar 3 para calcular el valor absoluto de A.");
	printf("\nIngresar 0 para salir del programa.\n");
	scanf("%d",&opc);
	return opc;
}
