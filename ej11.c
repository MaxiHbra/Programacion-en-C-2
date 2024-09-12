/*Ejercicio 11: Dados una cantidad no determinada de números naturales, mostrar para cada uno de ellos
si se trata de un número Deficiente, Abundante o Perfecto
Nota: Un número natural X se dice que es deficiente si la suma de sus divisores naturales (excepto el
mismo número) es menor a X. Si la suma de sus divisores es mayor a X, se dice que el número es
abundante y si es igual a X se dice que es perfecto. */
#include <stdio.h>
int tipo_num(int);
int divisores(int);
int main() {
	int n;
	printf("\nPor favor ingresar un numero natural: ");
	scanf("%d",&n);
	while(n>0){
		if(tipo_num(n)==1)
			printf("\nEl numero ingresado es Deficiente.");
		else if(tipo_num(n)==0) printf("\nEl numero ingresado es Abundante.");
			else printf("\nEl numero ingresado es Perfecto.");
		printf("\nPor favor ingresar un numero natural: ");
		scanf("%d",&n);
	}
	return 0;
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
	for(i=1;i<num;i++)if(num%i==0){aux=aux+i; printf("\n%d",aux);}
	return aux;
}
