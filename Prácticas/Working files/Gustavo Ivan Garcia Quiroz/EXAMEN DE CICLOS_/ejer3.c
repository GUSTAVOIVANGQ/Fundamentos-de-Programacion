#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int j, k,n, i;
	printf(" \t\t ------- p 3.7.3 Programa de piramide ------- \n\n ");
	printf("Dame el valor de n \n ");
	scanf("%d",&n);
	if(n<0 || n>30){
	system("color 4");
		printf(" \n      error :(");
	return 0;
	}
		printf(" ");
		printf(" ");
	for(i=0;i<n;i++){
		for(j=0;j<=n-i;j++){
		if(j==n){
		}else{
		printf(" ");
		}
		}
		for(k=0;k<=i;k++){
		printf("*");
		}
		for(k=0;k<=i;k++){
		printf("*");
		}
	printf(" \n ");
	}
	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");
	return 0;
}
