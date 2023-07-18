#include <stdio.h>
#include <stdlib.h>
                  //n = numero de personas
void promedios(int n){
	float pesoH, pesoM, alturaH, alturaM;
	int persona; int edad; float peso,altura;
	int hm18=0, mm18=0; char genero;
	for( persona=1,pesoH=0,pesoM=0,alturaH=0,alturaM=0; 
	                                          persona<=n;   persona++   )  {
	printf(" \t\t -------Programa 3.6------- \n\n ");
		printf("\n Ingrese la edad de la persona %d", persona);
		scanf("%d", &edad);
		if(edad>=18){
			printf("\n Ingrese el peso de la persona %d", persona);
			scanf("%f",&peso);
			printf("\n Ingrese la altura de la persona %d", persona);
			scanf("%f",&altura);
            printf("\n Ingrese el genero de la persona %d (H para Hombre - M para Mujer)", persona);
			fflush(stdin); // Limpieza de las entradas tipo char previas
			scanf("%c",&genero);
			if(genero == 'H' || genero =='h' ){
				// acumulacion o suma del peso de los hombres
				pesoH = pesoH + peso;
				// acumulacion o suma de altura de los hombres
				alturaH = alturaH + altura;
				// variable que cuenta hombres con edad> 18 años
				hm18++;
			}else { 
			    if(genero == 'M' || genero =='m' ){
				// acumulacion o suma del peso de las mujeres
				pesoM = pesoM + peso;
				// acumulacion o suma de altura de las muejeres
				alturaM = alturaM + altura;
				// variable que cuenta hombres con edad> 18 años
				mm18++;
			    }else{
			    	printf("\n valor no computado");
				}
			} 
		} // edad > 18
		else{
			printf("\n valor no computado");
		}
	}// fin del for
	printf("\n Promedio peso hombres mayores de edad = %f", pesoH/hm18);
	printf("\n Promedio altura hombres mayores de edad = %f", alturaH/hm18);
	printf("\n Promedio peso mujeres mayores de edad = %f", pesoM/mm18);
	printf("\n Promedio altura mujeres mayores de edad = %f", alturaM/mm18);
}

int main(int argc, char *argv[]) {
    int n;
	printf("Programa 3.6 peso, altura, sexo N");
    printf("\n¿ Cu%cntas personas vas a registrar ?:", 160);
    scanf("%d", &n);
    promedios(n);

	system("color 2");
	printf(" \n\n\t	Gracias por su visita  ");
	return 0;
}
