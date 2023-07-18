#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x,y, z, w;   // declaracion de tres variables de tipo int
    // LECTURA DE DATOS DESDE EL TECLADO
    printf("Ingrese 4 valores enteros: ");
	      // valores     // se asignan los valores a las variables
	scanf("%d %d %d %d", &x, &y, &z, &w );
// & operador que obtiene la direccion de memoria de la variable
	
	printf("\n x = %d  y = %d  z =%d  w = %d ", x, y, z, w );
	printf("\n dir x = %d  dir y = %d  dir z =%d  dir w = %d ", 
	                                         &x, &y, &z, &w );
    double x1 , y1, z1, w1;   // declaracion de tres variables de tipo int
    // LECTURA DE DATOS DESDE EL TECLADO
    printf("\n\n\nIngrese 4 valores tipo double: ");
	      // valores     // se asignan los valores a las variables
	scanf("%lf %lf %lf %lf", &x1, &y1, &z1, &w1 );
// & operador que obtiene la direccion de memoria de la variable
	
	printf("\n x = %e  y = %e  z =%e  w = %e ", x1, y1, z1, w1 );
	printf("\n dir x = %d  dir y = %d  dir z =%d  dir w = %d ", 
	                                         &x1, &y1, &z1, &w1 );
	
	int CLA;
    float SU1, SU2, SU3, SU4, SU5, SU6, ING, PRO;
	printf("\n\n\n\nIngrese la clave del empleado y los 6 sueldos: \n2");
	scanf("%d %f %f %f %f %f %f", &CLA, &SU1, &SU2, &SU3, &SU4, &SU5, &SU6);
	ING = (SU1 + SU2 + SU3 + SU4 + SU5 + SU6);
	PRO = ING / 6;
	printf("\n %d %5.2f %5.2f", CLA, ING, PRO);
	
	
	
	
	
	return 0;
}



