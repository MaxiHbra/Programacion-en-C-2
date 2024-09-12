/*EEjercicio 15: Dada una lista de números naturales se solicita mostrar los números que están formados
solo por dígitos pares. Además, mostrar el menor y el mayor de estos números (de los que cumplen la
condición).*/
#include <stdio.h>
int verificar(int);
int digitos_pares(int);
int main() {
	int men,may,n,i,num;
	printf("\nPor favor ingrese N: ");
	scanf("%d",&n);
	may=0;
	men=9999;
	for(i=1;i<=n;i++){
		printf("\nPor favor ingrese un numero NATURAL: ");
		scanf("%d",&num);
		if(verificar(num)==1){
			printf("\nEl numero %d solo esta formado por digitos pares.",num);
			if(num>may) may=num;
			if(num<men) men=num;
		}
	}
	if(may==0 && men==9999) printf("\nNo se ingresaron numeros con todos sus digitos pares.");
	else printf("\nMenor: %d \nMayor: %d",men,may);
	return 0;
}
int verificar(int num){
	int dig,b;
	while(num!=0){
		dig=num%10;
		if(digitos_pares(dig)==1) b=1;
		else b=0;
		num=num/10;
	}
	return b;
}
int digitos_pares(int dig){
	int band=0;
	if(dig%2 == 0) band=1;
	return band;
}
