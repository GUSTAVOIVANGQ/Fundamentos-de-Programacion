#include <stdio.h>
#include <stdlib.h>

void triangulo(int v){
	int i, j=0;
	for(i=1;i<=v;i++){
		do{
		j++;
		printf("%d ", j);
		}while(i>j);
		do{
		j--;
		if(j==0){
		}else{
		printf("%d ", j );
		}
		}while(j>0);
	printf("\n ");
		j=0;
	} 
}
int main(int argc, char *argv[]) {
	int n;
	printf("\t\t == programa ps 3.17 == ");
	printf("\n\n  Dame el valor de n ");
	scanf("%d",&n);
	triangulo(n);
		system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");
	return 0;
}
