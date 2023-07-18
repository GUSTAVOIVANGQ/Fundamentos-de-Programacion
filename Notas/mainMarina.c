#include <stdio.h>
#include <stdlib.h>
#include <math.h> // copy line  ctrl + E


int main(int argc, char *argv[]) {
    /* Este programa solicitará al ususario la siguiente información
       genero ('h' o 'm') (caracter-char), 
	    edad (entero - int ), estatura (real-float), peso (int)
		Verificar los requisitos:   todos deben de cumplirse (&&)
		1.55 mts estatura mínima Mujer
		1.65 mts estatura mínima Hombre
		IMC (INDICE DE MASA CORPORAL DE 18.5 A 24.9), donde
		IMC = PESO(kg)/(altura al cuadrado) (mts)
		               funcion pow(base, exponente)
					           pow(altura,2) altura al cuadrado
							   pow(2,3) 2 al cubo
							   pow(2,10) 2 a la potencia 10 = 1K=1024   
                                    pow(2,20) 1 Mega
	 								pow(10,4) = 10000
	    edad minima 18 años
	 */
	char genero;
    printf("PROGRAMA DE ACEPTACION A LA MARINA NACIONAL\n");
    printf("\n Ingrese su genero, \
	teclee \n h para hombre m para mujer:");
	scanf("%c", &genero);
	printf("\n %c", genero);

    int edad;
    printf("\n \nIngrese su edad:");
	scanf("%d", &edad);
	printf("\n %d", edad);

    float estatura;
    printf("\n \nIngrese su estatura en metros ej.  1.63:");
	scanf("%f", &estatura);
	printf("\n %.2f", estatura); // ctrl + espacio  Autocompleta
	
	float peso;
    printf("\n \nIngrese su peso en kg: ejemplo 52.0 ");
	scanf("%f", &peso);
	printf("\n %.2f", peso); 

   // float imc = peso / (estatura*estatura); // equivalente a line 46
    float imc = peso / pow(estatura, 2); // pow esta en math.h 
      
	  
	  //CONDICION O EXPRESION LOGICA, QUE SI ES VERDADERA ACTIVA
	                      // EL BLOQUE { } DEL IF, si la condicion
	                      // es falsa, SE IGNORA O SE SALTA el bloque
	                      // del if
     if( (genero == 'm' || genero == 'M') && estatura>=1.549999 ){
    	printf("\n Bienvenida a la Marina");
	}

	return 0;
}
