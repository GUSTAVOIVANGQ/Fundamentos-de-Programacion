#include <stdio.h>
#include <stdlib.h>

struct alumno{
	float prom;
	char nombre[200];
};


int main(int argc, char *argv[]) {
    struct alumno a1;
    
    strcpy(a1.nombre , "Juan");
    strcat(a1.nombre," Perez");
    a1.prom = 10.0;
    
    printf("nombre = %s", a1.nombre);
    printf("\n prom = %f", a1.prom+1);
    
    

    char cad2[20];        // bytes
    char * cad1 =  (char *) malloc(15); //devuelve : void* 
    puts("Ingresa una cadena 1");
    gets(cad1);
    puts(cad1);

    puts("Ingresa otra cadena 2");
    gets(cad2);
    puts(cad2);

	strncpy(cad1 , cad2, 4);
	cad1[7]=NULL; // '0'
	
	puts(cad1);
	strcat(cad1,cad2);
	
	puts(cad1); //concatenacion juntas cad1 y cad2
	
	int i = strcmp("Buenos","Buenos");
	printf("\n\ni=%d",i);
	if(i == 0){
		puts("\n Son iguales");
	}
	
	printf("\n Longitud de la cadena: MEXICO=%d",strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") );
	
	
   //	tarea.   strcat(cad0,cad3)     concatena dos cadenas  junta dos cadenas
	
	return 0;
}
