/*Ejercicio 13: Realizar un programa que genere al azar una lista de N números naturales aleatorios, en
el rango [A, B] (con A y B naturales) y muestre aquellos números aleatorios que cumplan con no ser
deficientes.
Nota: reutilizar la función generada en el ejercicio 11.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tipo_num(int);
int generar(int,int);
int divisores(int);
int main() {
	int a,b,n,i,num,band;
	srand(time(NULL));
	band=0;
	printf("\nPor favor ingrese N: ");
	scanf("%d",&n);
	printf("\nPor favor ingrese A: ");
	scanf("%d",&a);
	printf("\nPor favor ingrese B: ");
	scanf("%d",&b);
	for(i=1;i<=n;i++){
		num=generar(a,b);
		if(tipo_num(num)!=1){ 
			printf("\nEl numero generado aleatoriamente: %d no es deficiente.",num);
			band=1;
		}
	}
	if(band==0) printf("\nNo se generaron numeros que no sean deficientes en el rango [%d,%d].",a,b);
	return 0;
}
int generar(int min,int max){
	int x;
	x=rand()%(max-min+1)+min;
	return x;
}
int tipo_num(int num){
	int suma,b;
	b=-1;
	suma=divisores(num);
	if(suma<num) b=1;
	else if(suma>num) b=0;
	return b;
}
	int	divisores(int num){
		int i,aux;
		aux=0;
		for(i=1;i<num;i++)if(num%i==0)aux=aux+i;
		return aux;
	}
