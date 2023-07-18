#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//tipo de retorno - TR    Nombre de la Funcion -  NF
// Lista de Argumentos - LA     { bloque de la funcion = implementacion de la funcion }
//TR  NF (   LA     )
    //main = FUNCION PRINCIPAL
int main(int argc, char *argv[]) {
                       //El 3 y el 4 son los parámetros o valores
	int s = sumaMasUno(3,4); // Uso de la funcion sumaMas1
    printf("s = %d", s);
	    s = sumaMasUno(10000,10000); // Uso de la funcion sumaMas1
    printf("\n s = %d", s);
        s = sumaMasUno(-500,-500); // Uso de la funcion sumaMas1
    printf("\n s = %d", s);
    
    double    r = cuboMasUno(3.0); // Uso de la funcion sumaMas1
    printf("\n r = %lf", r);
    


	return 0;

}

//DEFINICION DE LA FUNCION sumaMasUno
//TR    NF      ( LA )
int  sumaMasUno( int sumando1, int sumando2){
      return sumando1+sumando2+1; 	
	}
//TR	NF       ( LA )
// DEFINICION DE LA FUNCION
double cuboMasUno(double num){
	         //pow(num,3) significa elevar el num al cubo
	  return pow(num,3)+1;  // la funcion pow tiene tipo de retorno : double
}
