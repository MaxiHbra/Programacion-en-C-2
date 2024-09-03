#include <stdio.h> 
void multiplicar(int a, int b); 
int main() { 
	int a,b; 
	printf("Ingresar A: "); 
	scanf("%d",&a); 
	printf("Ingresar B: "); 
	scanf("%d",&b); 
	multiplicar(a,b); 
	return 0;
}
void multiplicar (int a, int b){ 
	int i,sum; 
	sum=0; 
	for(i=1;i<=b;i++) { 
		sum=sum+a;
		printf("\nA * %d = %d",i,sum);
	}
}
