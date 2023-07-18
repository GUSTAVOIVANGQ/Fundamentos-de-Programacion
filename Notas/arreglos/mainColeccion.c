#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 4000 

void iniciar(float gastos[], float val){
	int i;
	srand(time(NULL)); 
	for( i=0  ; i<TAM; i++  ){
		//gastos[i]=0; // initial value 0       
		//gastos[i]=i; // initial value i 
		gastos[i]=i*5212%(i+1)-3; 
		// gastos[i]=rand();
	}
}


void imprimir(float gastos[]){
	int i;
	for( i=0  ; i<TAM; i++  ){
		printf("\n Gastos[%d]=%.5f",i, gastos[i]);
	}
}


void coleccion(){
     float gastos[TAM]; // square braces	[]
                       // curly braces ()
                       // braces { }
         // Crea una coleccion de 12 variables tipo float, con valor INDETERMINADO             
     printf("Primer variable de la coleccion = %.2f",
	                               gastos[7]);
	                             // gastos de 0
     iniciar(gastos, 5.12345);
	 imprimir(gastos);
}


int main(int argc, char *argv[]) {
    coleccion();     
	return 0;
}
