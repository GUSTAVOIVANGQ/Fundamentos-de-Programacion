#include <stdio.h>
#include <stdlib.h>

void prodVinos(int n){
   	   double totV1=0,totV2=0,totV3=0,totV4=0;
   	   double prodAnual;
   	   double litros;
   	   int i,j;
   	   for( i=1, prodAnual=0 ; i<=n  ; i++, prodAnual=0){    
	       for (j=1  ; j<=4  ; j++ ){
	       	  system("cls");
	          printf("\n Ingrese la producci%cn en litros \n del a%co %d del vino tipo %d:",162,164,i,j);
			  scanf("%lf", &litros);
			  switch(j){
			  	  case 1:  totV1+=litros; // totV1 = totV1 + litros;
			  	           break;
			  	  case 2:  totV2+=litros; // totV1 = totV1 + litros;
			  	           break;
				  case 3:  totV3+=litros; // totV1 = totV1 + litros;
			  	           break;
				  case 4:  totV4+=litros; // totV1 = totV1 + litros;
			  	           break;         
			  }
			  prodAnual += litros;
		   }
		   printf("\n Produccion Anual a%co %d = %.2lf", 164,i, prodAnual);
		   system("pause");
	   }
	   printf("\n Producci%cn Vino 1 = %.2lf",162,totV1);
	   printf("\n Producci%cn Vino 2 = %.2lf",162,totV2);
	   printf("\n Producci%cn Vino 3 = %.2lf",162,totV3);
	   printf("\n Producci%cn Vino 4 = %.2lf",162,totV4);
	   printf("\n Producci%cn Total de vino = %.2lf",162, totV1+totV2+totV3+totV4);
   }


int main(int argc, char *argv[]) {
    int n;
	printf("\nPrograma de producci%cn anual de 4 vinos",162);
    printf("\nIngrese el n%cmero de a%cos:",163,164);
    scanf("%d",&n);
	prodVinos(n);
	return 0;
}
