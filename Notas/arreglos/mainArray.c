#include <stdio.h>
#include <stdlib.h>
# define MESES 12
void iniciar(  ){

}


void imprimir(int cuadrado[8][8]){
	int i,j;
	for(i=0; i<8; i++){
		      for(j=0;j<8; j++){
		             printf("cuadrado[%d][%d]=%d",i,j, cuadrado[i][j]);
		      }
		      printf("\n");
	}
}


int main(int argc, char *argv[]) {
    const int N = 22;
	int size;
    printf("Ingrese el tama%co del arreglo:",165);
    scanf("%d",&size);
	int meses[MESES]; // indices 0 a MESES-1
	int grupo[size];  // indices 0 a size-1
	int coleccion[15];// indices 0 a 14
	float mediciones[N];
	
	
	scanf("%d", &meses[12]); // indice fuera del arreglo
    
    int cuadrado[8][8];
 //tarea.   iniciar(cuadrado); con valores aleatorios   rand();
    imprimir(cuadrado);
    

	return 0;
}
