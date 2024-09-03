#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int generar_tiempo(void); 
int main() { 
	int a,b;
	srand(time(NULL));
	printf("Bienvenido al programa");
	a=generar_tiempo();
	b=generar_tiempo(); 
	printf("\nEl tiempo de espera del cliente A es: %d \t El tiempo de espera del cliente B es: %d\n",a,b);
	if (a<b)printf("\nEl cliente A será atendido primero."); 
		else printf("\nEl cliente B será atendido primero"); 
	return 0; 
	}

int generar_tiempo (void){ 
	int x; 
	x=rand()%30+1; 
	return x;
}
