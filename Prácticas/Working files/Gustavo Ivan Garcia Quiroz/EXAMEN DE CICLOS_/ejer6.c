#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int j, k=0,n1, n2, i;
	printf(" \t\t ------- p 3.7.6 Programa de piramide ------- \n\n ");
	printf("Dame el valor de n1 \n ");
	scanf("%d",&n1);
	printf("Dame el valor de n2 \n ");
	scanf("%d",&n2);
	if(n2>n1){
	for(i=n1;i<=n2;i++){
	if(i%3==0){
		k=k+i;		
	printf("\n\n el resultado es %d \n ", k);
	}
	}
	}else if(n1>n2){
	for(i=n2;i<=n1;i++){
	if(i%3==0){
		k=k+i;		
	}
	}
	}
	printf("\n\n el resultado de la suma entre los multiplos de 3 es   %d \n ", k);
								
	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");
	return 0;
}
