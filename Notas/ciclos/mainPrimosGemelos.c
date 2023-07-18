#include <stdio.h>
#include <stdlib.h>

int esPrimo(int n){
	 int i;
	 for(i=2;  i<n   ; i++ ){
	 	if( n%i == 0 ){ // n fue dividido por i de manera exacta i.e con residuo == 0
	 		printf("\n%d es dividido por %d , %d no es primo",n,i,n);
           // break; // rompe el ciclo.  termina el ciclo for, salta a la 19
		   return 0;// da por terminada la funcion esPrimo, salta a la 21
		        // 0 No es primo
		 }
	 }
	printf("\n %d es primo", n);
	return 1;  // 1 Si es primo
}

void  primosGemelos(int n1, int n2){
      // n1                                              n2
	  // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
      //                                            i   
	  int i;
      
	  for(i=n1 ; i<= n2-2  ;   i++ ){
	      if( esPrimo(i)==1  && esPrimo(i+2)==1 ){
	      	  printf("\n %d y %d son primos gemelos",i,i+2);
		  }  	
	  }
	    
}


int main(int argc, char *argv[]) {
	int n1,n2;
    primosGemelos(1,20);
	return 0;
}
