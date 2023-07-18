#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float radius, volume; // float se anota solamente la primera vez
	radius = 1; // variable  operadorDeAsignacion literal_o_valor
	volume = 4/3.0*3.1416*radius*radius*radius; // 4/3 = 1      4.0/3= 1.33333333
	// LOS NUMEROS SIN PUNTO DECIMAL, POR DEFAULT SON int
	printf("\n\n  \"Volume\' = %.2f",  volume);
	return 0;
}

