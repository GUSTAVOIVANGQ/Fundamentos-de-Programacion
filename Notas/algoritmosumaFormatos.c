#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Superate a ti mismo");
	// formatos %d  base decimal
	printf("    %d", 171);
	//          %c  caracter 
	printf("    %c", 171);
	//          %f   float  numero con parte decimal
	//                 00 01 02 03 04 05 06 07 08 09 10 11 12   
	printf("    %.3f", 171.2);
	//          %i   int  numero sin parte decimal 
	printf("    %i", 171);
	//          %o   int  numero sin parte decimal en base ocho (octal) 
	//                  00 01 02 03 04 05 06 07 10 11 12 13 14 15 16 17 20 21 .. 
	printf(" 010 Octal   %O", 010);
	//          %x   int numero sin parte decimal en base 16 (hexadecimal)
	    //            00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13 14 15 16 17 18 19 1A 1B ...1F 20 21 ...2F 30 31 32 33 34 ..3F 40 41 ...             
		printf(" \n Hex   %X = Decimal %d", 0xF, 0xF);
	
    printf("\n\n 10E-9= %.20lf ",  10e-9);
    printf("\n\n 10E9%.20lf ",  10e+9);
		
	//Escribir en pantalla , usando la funcion printf, los siguientes
	// valores, usando los % y formatos correspondientes.:
	// #, 100000000.0 , 0.000000895, el numero 17 en base 10, en base 8 (octaly en base 16 (hexadecimal).	
	printf("\n %c", '#');
	printf("\n %c", 35);
	//-------------------------------	
	// = operador de asignacion de un valor a un identificador (variable)
	int radius = 3.0E+6;   //VARIABLES   variable radius
	printf("\a\n\t Radius = %d cm", radius);

	float diameter = 3.4E-1;   // variable diameter
//	int diameter = 5;  // es imposible cambiar el tipo de dato original (float)
	printf("\n\t Diameter = %.2f cm", diameter);
	printf("\n\t Diameter = %.2E cm", diameter);
    diameter = 1000.5;
	printf("\n\t Diameter = %.2lf cm", diameter);
	diameter = 1000.5*2; // * operador Multiplicación 
	printf("\n\t Diameter = %.2lf cm", diameter);
	/* 
	   Variable. Es un identificador, 
	   asociado a un tipo de dato, para almacenar valores 
	   del tipo de dato citado. Ejemplo: variable radius y diameter  
	*/           
	
	printf("\n Monday $ \"  / q 8 * @ \\ %.2lf ", 224.0); 
    //mostrar en pantalla la palabra:    "CAMPEÓN"
	//scanf("%d",   &radius);	
		
		
		
		
		
		
		
		
		
	
	return 0; // exito
}
