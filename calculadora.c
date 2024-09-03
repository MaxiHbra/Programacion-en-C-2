#include <stdio.h>

int menu(void);
void ingreso(float*,float*);
int main() {
	float a,b;
	int opc;
	do{ /*ciclo do while para iterar dependiendo del valor que retorne el menu*/
		opc=menu();
		switch(opc){ /*switch para mostrar la eleccion del usuario*/
		case 1 : ingreso(&a,&b);printf("\n%f + %f = %f \n",a,b,a+b);break;
		case 2 : ingreso(&a,&b);printf("\n%f - %f = %f \n",a,b,a-b);break;
		case 3 : ingreso(&a,&b);printf("\n%f / %f = %f \n",a,b,a/b);break;
		case 4 : ingreso(&a,&b);printf("\n%f * %f = %f \n",a,b,a*b);break;
		default : printf("\nUsted salio del programa."); break;
		}
	}while(opc != 0);
	return 0;
}
int menu(){ 
	int opc;
	printf("\nIngresar 1 para sumar. ");
	printf("\nIngresar 2 para restar. ");
	printf("\nIngresar 3 para dividir. ");
	printf("\nIngresar 4 para multiplicar. ");
	printf("\nIngresar 0 para salir. \n");
	scanf("%d",&opc);
	return opc;
}
void ingreso(float *a,float *b){
	printf("\nIngrese los valores: ");
	scanf("%f",a);
	scanf("%f",b);
}
