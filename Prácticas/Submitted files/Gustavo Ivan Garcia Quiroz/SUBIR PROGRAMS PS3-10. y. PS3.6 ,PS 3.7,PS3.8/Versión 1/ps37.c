#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	int res=0, n, i=0;
	printf(" \t\t------ programa 3.7-------\n ");
	printf("Dame el valor de n  \n ");
	scanf("%d",&n);
	printf(" \n\n\t	Procedimiento  ");
	do{
	if (i==0){
		res=0;  
	}else if (i%2==0){
		res=res-pow(i,i);  
	printf(" \n resultado= %d - %d ", res,pow(i,i));
	}
	else if(i%2!=0){
		res=res+pow(i,i);  
	printf(" \n resultado= %d+%d ", res,pow(i,i));
	}
		i++;
	}while(i<=n);
	printf(" \n\n	El valor resultante es= %d ", res);
	system("color 2");
	printf(" \n\n\t	Gracias por su visita  ");
	return 0;
}
