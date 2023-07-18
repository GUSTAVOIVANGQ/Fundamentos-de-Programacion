#include <stdio.h>
#include <stdlib.h>

void ejemplosFor(int p, int q){	
	  // inicialicion de variables     pregunta   actualización variable(s) que intervienen en la pregunta
	for(        ;    !(p==200) && q < 100      ;  p*=2, q++  ){
	//only once	                                //ULTIMO                    
     
		printf("\n %d ==  200 o %d < 100",p,q);	
	
	   //zona de actualización de variables
	   
	}  
		printf("\n DESPUES DEL FOR: %d+%d=%d < 200",p,q,p+q);
}

int main(int argc, char *argv[]) {
	     //     p   q     parámetros. los valores con los que trabajara la funcion
	ejemplosFor(10,15);
    //ejemplosFor(50,30);
    //ejemplosFor(100,99);
    

	return 0;
}
