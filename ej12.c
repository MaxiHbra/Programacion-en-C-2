/*Ejercicio 12: Dado un número natural N, generar al azar N números naturales X, de a lo sumo 6 cifras y
determinar, para cada número X, si es capicúa, en caso de no serlo, generar un nuevo valor Y, que será
igual al producto de todos los dígitos de X. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generar();
int capicua(int);
int producto(int);
int main() {
	int n,x,y,i;
	srand(time(NULL));
	printf("\nPor favor ingresar el valor N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x=generar();
		if(capicua(x)==0){
			y=producto(x);
			printf("\nComo %d no es capicua, el valor del producto de sus digitos es: %d",x,y);
		}
		else printf("\n%d es capicua.",x);
	}
	return 0;
}
int generar(){
	int x;
	x=rand()%(999999)+1;
	return x;
}
int capicua(int x){
	int b,dig,aux,acu;
	acu=0;
	aux=x;
	while(x!=0){
		dig=x/10;
		acu=acu*10+dig;
		x/=10;
	}
	if(acu==aux)b=1;
	else b=0;
	return b;
}
int producto(int x){
	int y;
	y=1;
	while(x!=0){
		y=y*(x%10);
		x/=10;
	}
	return y;
}
