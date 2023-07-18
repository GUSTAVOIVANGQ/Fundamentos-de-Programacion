#include <stdio.h>
#include <stdlib.h>

double   horasExtra( double salario, int categ, int he){
   	double total;   // total = salario + horas extra * pago_he
   	total = salario; 
   	int pago_he;
   	if(he > 30){
   	   he = 30;     // maximo 30 horas extra	
	}
	if(he < 1){
		he = 0;    // no se aceptan valores negativos o cero
	}
   	switch(categ){
   		case 1: pago_he = 40;
   			  break;
   	    case 2: pago_he = 50;
   	    	   break;
   		case 3: pago_he = 85;
   			   break;
   		default: pago_he = 0;  
   		        break;
	   }
   	total = total + he * pago_he; 
   	return total;
}

int main(int argc, char *argv[]) {
    // INTERFACE O COMUNICACION CON EL USUARIO (printf - scanf)
    printf("Un trabajador salario 5000, categoria 1 y 1 hr extra:");
    printf("\n Total = %lf", horasExtra(10000.0, 2, 2));
	return 0;
}
