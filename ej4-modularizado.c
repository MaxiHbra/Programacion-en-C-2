/*Ejercicio 4: Dados dos naturales, X e Y, donde X<Y, se necesita generar aleatoriamente dos 
números reales A y B, pertenecientes a rango [X, Y] y a continuación mostrar un menú que permita
calcular y mostrar:
a) La raíz cuadrada de A.
b) La potencia de A^B.
c) El logaritmo decimal de B. */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int menu(void); /*modulo de tipo funcion para el menu de eleccion*/
int random(int a, int b); /*modulo de tipo funcion para generar numeros aleatorios*/
int main(){
	int opc,x,y;
	float a,b;
	printf("\nPor favor ingresar X: ");
	scanf("%d",&x);
	printf("\nPor favor ingresar Y mayor que %d: ",x); /*aclaracion respetando el enunciado para luego verificar*/
	scanf("%d",&y);
	if(x<y){ /*estructura de control para verificación*/
		printf("\nEl rango del calculo es [%d, %d]",x,y); 
		srand(time(NULL)); /*utilizar funcion rand con el tiempo en nanosegundos, para generar numero casi irrepetibles*/
		a=random(x,y); /*generar numero aleatorio dentro del rango deseado*/
		b=random(x,y);
		printf("\nLos numeros generados aleatoriamente dentro del rango mencionado son: \tA= %f \tB= %f",a,b);
		do{ /*ciclo do while para iterar dependiendo del valor que retorne el menu*/
			opc=menu();
			switch(opc){ /*switch para mostrar la eleccion del usuario*/
			case 1 : printf("\nEl la raiz cuadrada de A es: %f",sqrt(a)); break;
			case 2 : printf("\nLa expreción A^B es: %f",pow(a,b)); break;
			case 3 : printf("\nEl logaritmo decimal de B es: %f",log10(b)); break;
			default : printf("\nUsted salio del programa."); break;
			}
		}while(opc != 0);
	} else printf("\nIngreso invalido, x no es menor que y."); /*si los numeros ingresados no cumplen los requisitos no realizar nada de lo anterior*/
	return 0;
}
int random(int x, int y){
	float a = a=rand()%(y-x+1)+x; 
	return a;
}
int menu(){ 
	int opc;
	printf("\nIngresar 1 para calcular la raiz cuadrada de A.");
	printf("\nIngresar 2 para calcular A^B.");
	printf("\nIngresar 3 para calcular el logaritmo decimal de B.");
	printf("\nIngresar 0 para salir del programa.\n");
	scanf("%d",&opc);
	return opc;
}

