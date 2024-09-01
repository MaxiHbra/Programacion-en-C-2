#include <stdio.h>
void muestra_parametros(int, int*); /*parametro por valor y parametro por referencia*/
void incrementa_parametros(int, int*); /*parametro por valor y parametro por referencia*/
int main() {
	int a,b;
	printf("a = "); scanf("%d",&a); /*ingreso de valor a un lugar de memoria*/
	printf("b = "); scanf("%d",&b);
	printf("\nDATOS DEL MAIN\n");
	printf("valor de a: %d\n",a); /*imprime valor guardado en un lugar de memoria*/
	printf("direccion de memoria de a: %p\n",&a); /*imprime lugar de memoria*/
	printf("valor de b: %d\n",b);
	printf("direccion de memoria de b: %p\n",&b);
	muestra_parametros(a,&b); /*parametros actuales*/
	incrementa_parametros(a,&b); /*parametros actuales y parametro pasado por referencia*/
	muestra_parametros(a,&b); /*parametros pasado por valor y parametro pasado por referencia*/
	return 0;
	}
void muestra_parametros(int x, int *y) { /*parametros formales*/
	printf("\nDATOS DEL MODULO\n");
	printf("valor de x: %d\n",x); /*mostrar valor*/
	printf("direccion de memoria de x: %p\n",&x); /*mostrar lugar de memoria de la variable dentro de la funcion*/
	printf("valor de y: %d\n",*y); /*mostrar valor del parametro pasado por referencia*/
	printf("direccion de memoria de y: %p\n",y); /*mostrar lugar de memoria*/
	}
void incrementa_parametros(int x, int *y) { /*parametros formales*/
	x=x+1; /*variable local a la funcion*/
	*y=*y+1; /*variable modificada en el lugar de memoria*/
	}
