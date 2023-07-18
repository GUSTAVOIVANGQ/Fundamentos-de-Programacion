#include <stdio.h>
#include <stdlib.h>
#define SEG_POR_HORA 3600.0
#define SEG_POR_MIN 60
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    // case sensitive -  diferencia entre mayúsculas y minúsculas
    printf("SEG POR HORA=%f SEG POR MIN=%d", SEG_POR_HORA, SEG_POR_MIN);
    //SEG_POR_HORA++; // ERROR , LAS CONSTANTES NO SE CAMBIAN
                             // && AND o Y
	if(SEG_POR_HORA == 3601 && SEG_POR_MIN == 60){
		// && SERA VERDADERA SI y solo SI TODOS SUS expresiones lógicas 
		//SON VERDADEROS
       printf("\n AND Cierto 1 ! seg por hora = 3600 y seg por min son 60");
	   printf("\n AND Cierto 2 ! seg por hora = 3600 y seg por min son 60");
	   printf("\n AND Cierto 3 ! seg por hora = 3600 y seg por min son 60");
	   printf("\n AND Cierto 4 ! seg por hora = 3600 y seg por min son 60");
    } // best practices . Siempre colocar {} a un if
                            //  || OR u o
     // || SERA VERDADERO SI AL MENOS UNA DE SUS EXPRESIONES LÓGICAS
	 // ES VERDADERA                       
	if(SEG_POR_HORA == 3601 || SEG_POR_MIN == 60){
	
		// && SERA VERDADERA SI y solo SI TODOS SUS expresiones lógicas 
		//SON VERDADEROS
       printf("\n OR Cierto 1 ! seg por hora = 3600 y seg por min son 60");
	   printf("\n OR Cierto 2 ! seg por hora = 3600 y seg por min son 60");
	   printf("\n OR Cierto 3 ! seg por hora = 3600 y seg por min son 60");
	   printf("\n OR Cierto 4 ! seg por hora = 3600 y seg por min son 60");
    } // best practices . Siempre colocar {} a un if
    
	return 0;
}
