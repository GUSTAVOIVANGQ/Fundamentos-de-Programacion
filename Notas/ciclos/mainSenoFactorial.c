#include<stdio.h>
#include<stdlib.h>
#include<math.h>
                         
double  factorial(double n){
  	double fact;
  	int i;
  	for(i=1, fact=1;   i<=n   ;i++){
  		fact *= i;
	}
  	return fact;
}


int seno(double x){
	   int i=1, terminos = 1, iteracion = 0;
	   double serie = x;
	   double sig_term,dif;
	   do{
	   	   i+=2;
		   sig_term = pow(x,i)/factorial(i);
	   	   
	   	   printf("\n numerador = %e ",  pow(x,i));
	   	   printf("\n denominador = %e ", factorial(i)) ;
	   	   printf("\n sig_termino = %e", sig_term);
		   
		   dif = serie - sig_term;
		   printf("\n Diferencia = %e", dif);
	       
		   system("pause");
		     	       
		   terminos++;
		   
		   if( iteracion == 0 ) {
		   	  serie -= sig_term;
		   	  iteracion = 1;
		   }
		   else{
		      serie += sig_term;
		   	  iteracion = 0;
		   }	
		   printf("\n\n parcialidad %d de %.2lf = %lf",terminos,x, serie);
		   
		   	       
		   
	   }while(dif>0.001);
	   
	   printf("\n\n seno final de %lf = %lf",x, serie);
	   return terminos;
}

int main(int argc, char *argv[]) {
	//printf("%d", factorial(6));
    printf("\n terminos = %d",seno(1));
	return 0;
}
