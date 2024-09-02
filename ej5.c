/*Ejercicio 5: Dados dos números naturales a y b y dado un número natural N, mostrar N números naturales
X generados aleatoriamente en el intervalo [a, b] y que sean múltiplo de K.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generar_mostrar(int a, int b, int n, int k); /*modulo del tipo prototipo solo para mostrar lo requerido en el enunciado*/

int main(){
	int a,b,n,k;
	srand(time(NULL)); /*utilizar funcion rand con el tiempo en nanosegundos, para generar numero casi irrepetibles*/
	printf("\nPor favor ingresar A: ");
	scanf("%d",&a);
	printf("\nPor favor ingresar B mayor que %d: ",a); /*aclaracion respetando el enunciado para luego verificar*/
	scanf("%d",&b);
	if(a<b){ /*estructura de control para verificación*/
		printf("\nPor favor ingresar N: ");
		scanf("%d",&n);
		printf("\nPor favor ingresar K: ");
		scanf("%d",&k);
		printf("\nEl rango del calculo es [%d, %d]",a,b); 
		generar_mostrar(a,b,n,k); /*invocar a la funcion para luego del ingreso*/
	} else printf("\nIngreso invalido, x no es menor que y."); /*si los numeros ingresados no cumplen los requisitos no realizar nada de lo anterior*/
	return 0;
}
void generar_mostrar(int a, int b, int n, int k){
	int cont,x;
	cont=0;
	while(cont!=n){ /*se sale de la estructura de control cumpliendo con el contador*/
		x=rand()%(b-a+1)+a; /*generar numero aleatorio dentro del rango deseado*/
		if(x%k == 0){ /*si es multiplo de k entra a la estructura de control*/
		printf("\nEl numero %d generado entre [%d, %d] es multiplo de %d",x,a,b,k);
		cont++;} /*subir contador*/
	}
}
