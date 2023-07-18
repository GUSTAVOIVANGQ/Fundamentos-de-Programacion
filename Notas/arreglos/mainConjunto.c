#include <stdio.h>
#include <stdlib.h>
                            //tamaño
void conjunto(int arr[], int length){
	// elimina los elementos repetidos
	// cualquier cambio sobre arr, sera PERMANENTE
	// paso por referencia, SE PASA LA DIRECCION DE MEMORIA DEL ARREGLO
	// paso por referencia, evita hacer copias de las variables
    int i;
    for( i=0 ; i<length ; i++){
    	borrar(arr[i], arr, i ,length);    
	}
}

void borrar(int elem, int arr[], int indice, int length ){
	 // borrado = 0
	int i;
    for( i=indice+1 ; i<length ; i++){
    	if( elem == arr[i] ){
    		arr[i]=0;  // borrado
		}    
	}
}

void print(int arr [], int length){
	int i;
	for( i=0 ; i<length ; i++){
    	if(arr[i]!=0){
		   printf("%d ", arr[i]);    
		}
	}
	printf("\n\n");
}


int main(int argc, char *argv[]) {
    int arr[] = {1,2,3,4,4,4,5,6,7,8,9,9,9,10,11,11,11,12,13,14,15,15,15,16}; 
    int length = sizeof(arr)/sizeof(int); // calcula el tamaño del arreglo
    //printf("size = %d",length);
    print(arr,length);
	conjunto(arr,length);
	print(arr,length); 
	return 0;
}
