#include <stdio.h>
#include <stdlib.h>

double tempGrillo(int numSonidos){
	double tempFaren = numSonidos / 4.0 + 40;
	double tempCentig = (tempFaren-32)/1.8;
	return tempCentig;
}

int   creciente(int n1, int n2, int n3){
      if (n1<n2 && n2<n3){
      	 return 1; // verdadero   .  Estan en orden creciente
	  } 
	  else{
	  	return 0; // falso .    No están en orden creciente 
	  }
	
}

int main(int argc, char *argv[]) {
    int opcion;
    int numSonidos;
    double tempCentig;
    double tempFaren;
    int n1,n2,n3, resCrec;
    
	printf("Programario (9 programas) 1. Temp Sonidos Grillo\n \
	      2.   4. Orden Creciente ... 9.    \n Elige la opci%cn:",162);
	scanf("%d", &opcion);
 
    switch(opcion){
    	case 1:
		       printf("\n Ingrese el n%cmero de sonidos que emite el grillo:",163);
	           scanf("%d", &numSonidos);	  
    	       tempCentig = tempGrillo(numSonidos);
		       printf("\n Dado n%cmero Sonidos =%d, \nla temperatura en %cC es = %lf %cF = %lf",163,numSonidos,167, tempCentig, 167, numSonidos / 4.0 + 40 );
    	       
			   break;
    	case 2:
		       break;
    	case 3:
    		   break;
    	case 4:
    		   printf("\n Orden Creciente, \ningrese tres n%cmeros enteros diferentes:",163); 
    		   scanf("%d %d %d", &n1, &n2, &n3);
    		   resCrec = creciente(n1,n2,n3); // 1 o 0
               if(resCrec == 1){
               		printf("\n %d %d %d est%cn en orden creciente",n1,n2,n3,160 );
			   }
			   else{
			   		printf("\n %d %d %d No est%cn en orden creciente",n1,n2,n3,160 );
			   }
    		   break;
    	
    	case 7:
    		        if(y % 4 == 0){
					    fx = pow(y,3.0);
				    }
				    
				    // if
				    // if 
				    
				    if(){
				    	fx = sqrt(y);
				    	
					}
    		        break;
    	case 9:
    		   break;
    	default:
    		break;
	}





	return 0;
}
