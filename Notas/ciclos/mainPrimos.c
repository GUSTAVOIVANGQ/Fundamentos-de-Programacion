#include <stdio.h>
#include <stdlib.h>

void primos(int n){ // primos inferiores a n
	int i;	
    for( i = 1 ; i<n   ; i++  ){
    	esPrimo(i);
	}
}

void esPrimo(int n){
	 int i;
	 for(i=2;  i<n   ; i++ ){
	 	if( n%i == 0 ){ // n fue dividido por i de manera exacta i.e con residuo == 0
	 		printf("\n%d es dividido por %d , %d no es primo",n,i,n);
           // break; // rompe el ciclo.  termina el ciclo for, salta a la 19
		   return; // da por terminada la funcion esPrimo, salta a la 21
		 }
	 }
	printf("\n %d es primo", n);
}


int main(int argc, char *argv[]) {
    primos(15); 
	return 0;
}
