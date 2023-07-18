#include <stdio.h>
#include <stdlib.h>

void sumaSalarios(int profesores){	
	  // inicialicion de variables     pregunta   actualización variable(s) que intervienen en la pregunta
	int nom;
	int salario;
	int i;                           //i+=1  i=i+1
	for(  i=1,nom=0 ;   i<=profesores      ;     i++ ){
	//only once	                                //ULTIMO                    
		printf("\n Ingrese salario del profesor %d: ",i);
		scanf("%d",&salario);
		nom += salario;  // nom = nom + salario;	
	   //zona de actualización de variables
	}  
		printf("\n\n LA nomina total es: %d", nom);
}

int main(int argc, char *argv[]) {
	     //     p   q     parámetros. los valores con los que trabajara la funcion
	sumaSalarios(3);
	sumaSalarios(2);
    
	//ejemplosFor(50,30);
    //ejemplosFor(100,99);
    

	return 0;
}
