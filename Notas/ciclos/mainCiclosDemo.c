#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n = 10;
	while( n<200 ){
		printf("\n n=%d es menor que 20",n);
		
		
		n = n * 2; // actualización es parte del bloque del while
	   // ULTIMO
	}
	

	int m = 10;
	do{
		printf("\n m=%d es menor que 200",m);
		
		
		m = m * 2; // actualización es parte del bloque del do while
		//ULTIMO
	}while(m<200);
		
	int p;	
	  // inicialicion de variables     pregunta   actualizacion variable(s) que intervienen en la pregunta
	for( p=10   ;            p<200     ;  	 p = p * 2   ){
	//only once	                                //ULTIMO                      
		                            
		printf("\n p=%d es menor que 200",p);
	
	}  
	// EL CICLO for SE RECOMIENDA CUANDO YA SABEMOS CUANTAS
	// VECES QUEREMOS REALIZAR EL CICLO (CUANTAS REPETICIONES O ITERACIONES)
	
	
	return 0;
}
