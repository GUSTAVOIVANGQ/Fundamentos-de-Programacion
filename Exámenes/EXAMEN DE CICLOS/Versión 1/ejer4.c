#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int c[10] , s, i, j, k, n[10];
	printf(" \t\t ------- p 3.7.4 Programa de 10 numeros ------- \n\n ");
	for(  i=1;i<=10;i++){
	printf(" Dame el numero %d \n ", i);
	scanf("%d",&n[i]);
	}
	for(j=1;j<=10;j++){
		c[j]=0;
	}
	for(k=1;k<=10;k++){
	for(j=1;j<=10;j++){
	if(n[k]==n[j]){
		c[k]=(c[k])+1;
	}
	}
	}
//	for(j=1;j<=10;j++){
//	printf("\t numero %d ", n[j] );
//	}
fflush(stdin);
	for(s=1;s<=10;s++){
	printf("\n\t veces repetido numero %d ", n[s]);		  
fflush(stdin);
	printf(" %d", c[s]-1);
fflush(stdin);
	}


	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");
	
	return 0;
}
