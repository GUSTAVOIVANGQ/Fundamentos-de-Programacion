#include <stdio.h> // printf scanf
          // empty argument list
void pagos(      ){
float pag, spa;
spa = 0;
printf("Ingrese el primer pago:\t");
scanf("%f", &pag);
while (pag>0) // pregunta
/* Observa que la condición es verdadera mientras el pago es diferente de cero. */
{
//spa = spa + pag;
  spa += pag;    //suma    acumulador
//actualización de datos (pag) la variable que interviene en la pregunta
printf("Ingrese el siguiente pago:\t");
scanf("%f", &pag);          
}
printf("\nEl total de pagos del mes es: %.2f", spa);
/* Observa que la proposición que modifica la condición 
es una lectura (scanf). otra opcion pudo haber sido pag++  pag*=2  etc. */
}

float unoSobreN(int n){
       float sum;
       int i;
	   for( i=1, sum=0 ;  i<=n;  i++ ){
	   	    sum += 1.0/i; // 1.0 para forzar a que division float
	   	    printf("\n suma parcial = %f  + 1/%d  %f",sum,i,1.0/i);
	   }	
	   return sum;	
}    

double suma(int a, int b){
	return a+b*1.5;
}


      
// signature function: el nombre completo de la funcion, incluyendo
// tipo de retorno, nombre de la funcion y (lista de argumentos) 
void main(void)
{   int n=10;
	float s = unoSobreN(n);
	printf("\n\n\nLa serie para %d es = %f", n, s );
	//pagos();
}
