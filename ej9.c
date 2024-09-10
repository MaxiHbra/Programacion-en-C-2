#include <stdio.h> 
int divisores(int p); /*modulo del tipo función para contar divisores*/
int primo(int p); /*modulo del tipo función para reconocer primos*/
int base(int num, int base); /*modulo del tipo funcion que retorna el numero transformado en nueva base*/
int main(){
	int x,aux;
	printf("\nIngresa un numero X: ");
	scanf("%d",&x);
	aux=divisores(x); /*invoca a la funcion para contar divisores*/
	if(primo(aux)==1)
		printf("\nEl numero es primo. El equivalente en base 2 es: %d",base(x,2));
	else printf("\nEl numero no es primo. Su equivalente en base 9 es: %d",base(x,9));
	return 0;
}
	int divisores(int a){
		int i,cont;
		cont=0;
		for(i=1;i<=a;i++){
			if(a%i==0)cont++;
		}
		return cont;
	}
		int primo(int p){
			int pd,b;
			pd=2;
			while(pd <= p/2 && p%pd != 0)pd++;
			if(pd> p/2 && p!=1)
				b=1;
			else b=0;
			return b;
		}
			int base(int num, int base){
				int aux,dig,nnum,sum;
				aux=num;
				nnum=0;
				sum=0;
				dig=0;
				while(aux>=base){
					if(aux%base==0){
						nnum=nnum*10+9;
					}else nnum=nnum*10+(aux%base);
					aux=aux/base;
				}
				nnum=nnum*10+aux;
				while(nnum!=0){
					dig=nnum%10;
					if(dig==9)sum=sum*10+0;
					else sum=sum*10+dig;
					nnum=nnum/10;
				}
				return sum;
			}
