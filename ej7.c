/*Ejercicio 7: Escribir la cabecera e implementar módulos que realicen las siguientes operaciones:
a) Calcular la cantidad de divisores naturales de un número natural X.
b) Determinar si un número natural X es primo.
c) Comparar dos números reales A y B, devolviendo 1 si A>B; 0 si A=B o -1 si A<B.
d) Invertir un número entero X.
Probar los módulos mediante un programa que presente un menú con las cuatro operaciones
implementadas.*/
#include <stdio.h>
int divisores(int);
int primo(int);
int compara(float, float);
int invertir(int);
void ingreso_ent(int*);
void ingreso_real(float*);
int menu();

int main() {
	float a,b;
	int x,opc,aux;
	do{
		opc=menu();
		switch(opc){
		case 1 : do{ingreso_ent(&x);}while(x<0);
			printf("\nLa cantidad de divisores primos de %d es: %d",x,divisores(x));
			break;
		case 2 : do{ingreso_ent(&x);}while(x<0);
			if(primo(x)==1)printf("\nEl numero %d es primo",x);
			else printf("\nEl numero %d NO es primo",x);
			break;
		case 3 : ingreso_real(&a);
			ingreso_real(&b);
			aux= compara(a,b);
			if(aux==1) printf("\nEl numero %f es mayor que %f",a,b);
			else if(aux==0) printf("\nEl numero %f es igual que %f",a,b);
			else printf("\nEl numero %f es menor que %f",a,b);
			break;
		case 4 : ingreso_ent(&x);
		printf("\nEl numero %d invertido se escribe: %d",x,invertir(x));
		break;
		default : printf("\nUsted está saliendo del programa.");
		break;
		}
	}while(opc!=0);
	return 0;
}
int menu(){
	int opc;
	printf("\nIngrese 0 para salir del programa.");
	printf("\nIngrese 1 para calcular la cant de divisores naturales de un numero NATURAL.");
	printf("\nIngrese 2 para determinar si un numero NATURAL es primo.");
	printf("\nIngrese 3 para comparar dos numeros.");
	printf("\nIngrese 4 para invertir un numero ENTERO. \n");
	scanf("%d",&opc);
	return opc;
}
void ingreso_ent(int* x){
	printf("\nPor favor ingrese un numero entero: ");
	scanf("%d",x);
}
void ingreso_real(float* x){
	printf("\nPor favor ingrese un numero real: ");
	scanf("%f",x);
}
int divisores(int x){
	int cont,i;
	cont=0;
	for(i=1;i<=x;i++)
		if(x%i == 0) cont++;
	return cont;
}
int primo(int x){
	int pd = 2;
	int rdo = 0;
	while(pd<= x/2 && x%pd !=0) pd++;
	if(pd > x/2 && x!=1) rdo=1;
	return rdo;
}
int compara(float a, float b){
	int rdo;
	if(a>b) rdo=1;
	else if(a==b) rdo=0;
		else rdo=-1;
	return rdo;
}
int invertir(int x){
	int dig,aux;
	aux=0;
	while(x!=0){
		dig=x%10;
		aux=aux*10+dig;
		x=x/10;
	}
	return aux;
}
