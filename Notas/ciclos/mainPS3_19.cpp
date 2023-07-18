#include <stdio.h>
#include <stdlib.h>
void espacios(int n){
	int i;
	for(i=1; i <= n ;     i++ ){
		printf(" ");
	}	
}
                
int incDig(int dig){
	return (++dig)%10;
}

void digitos(int inic, int n){
	int i;
	for( i=1 ; i <= n;  i++ , inic = incDig(inic) ){
		printf("%d ", inic);
	}
}

 
int main(int argc, char *argv[]) {
    int i, terminos = 0, inicio = 1 ;
    int central = 1;                                                                
	for( i=10  ; i>=1 ;  i--, terminos++, inicio=incDig(inicio), central=incDig(incDig(central)) )  {
    	espacios(i);
        digitos(  inicio  , terminos );
        printf(" %d", central);
    	printf(".\n");
	}
	printf("fin.");	
	return 0;
}
