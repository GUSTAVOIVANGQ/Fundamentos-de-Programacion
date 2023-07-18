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
	int radius=2147483647;   //VARIABLES   variable radius
	printf("\a\n\t Radius = %d cm", radius);
	float diameter=3.4E38;   // variable diameter
	printf("\a\n\t Diameter = %.2f cm", diameter);
	printf("\a\n\t Diameter = %.2E cm", diameter);
	
	
	//scanf("%d",   &radius);	
		
	
	return 0; // exito
}
