#include <stdio.h>
#include <stdlib.h>
void renglon(int n){
	int i;
	for(i=1; i<= n ;     i++ ){
		printf( "%d  " ,i);
	}	
}
 
void hight(int n){
     int i;
	 for( i=1  ; i<=n ;                i++){
	 	renglon(i);
		printf("\n");	
	 }	 
}

void low(int n){
     int i;
	 for( i=1  ; i<=n ;                i++){
	 	renglon(i);
		printf("\n");	
	 }	 
}


void piramid(int n){
     hight(n);
	 //low(n);	
}

int main(int argc, char *argv[]) {
//    renglon(4);
    hight(11);
	return 0;
}
