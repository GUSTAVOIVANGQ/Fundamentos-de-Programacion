#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   // char cad1[20];        // bytes
    char * cad1 =  (char *) malloc(15); //devuelve : void* 
    puts("Ingresa una cadena (numero):");
    gets(cad1);
    puts(cad1);

    int i=0;
    while(cad1[i]!=NULL){ // '\0' NULL o FIN DE CADENA
    	printf("cad1[%d]=%c  ",i,cad1[i]);
    	i++;
	}    

    int numero=atoi(cad1);  // convierte una cadena en un entero
    printf("\n Numero Leido incrementado= %d", ++numero);
	
	char * cad0 = (char *) malloc (30); 
	strcpy(cad0 , "hola mexico de mis amores");
	char cad3[20] = ", Buenos Dias !!!";
	
	strcpy(cad0, cad3);
	puts(cad0);
	
   //	tarea.   strcat(cad0,cad3)     concatena dos cadenas  junta dos cadenas
   puts(cad0);
	
	return 0;
}
