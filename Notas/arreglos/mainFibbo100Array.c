#include <stdio.h>
#include <stdlib.h>
             //paso por referencia. se trabaja con el arreglo original
             //los cambios al arreglo serán PERMANENTES
void fibo100(double arr[100]){
	int i, ant1=0, ant2=1;
	arr[0] = arr[1] = 1;
	for( i=2  ; i<100  ;  i++, ant1++, ant2++ ){
                 //         3         4
			arr[i] = arr[ant1]+arr[ant2];
	}   	
}

void print(double arr[100]){
	int i;
	for( i=0  ; i<100  ;  i++){
			printf("%.0lf ", arr[i]);
	}
}

int main(int argc, char *argv[]) {
    double arr[100];
    fibo100(arr);	
	print(arr);
	return 0;
}
