#include <stdio.h>
#include <stdlib.h>
//variable global
int global= 0;  // visible en todas las funciones de este archivo
                   
				   //argumento n. variable local 
double l1,l2,l3,l4,l5,l6;  // globales 

void leerPreciosLoc(){
	int loc;
	for( loc=1;  loc<=6;    loc++  ){
		printf("Ingresa el precio de la localidad %d: ", loc);
		switch(loc){
			case 1: scanf("%lf", &l1);
                    break;				
			case 2: scanf("%lf", &l2);
                    break;
			case 3: scanf("%lf", &l3);
                    break;
			case 4: scanf("%lf", &l4);
                    break;
			case 5: scanf("%lf", &l5);
                    break;
			case 6: scanf("%lf", &l6);
		}	
	}
	//int y; // variable local , vive en la funcion leerPreciosLoc
	//global++;
	//printf("\n global = %d", global);
}

void leerVentas(){
	 int loc=1, boletos=1; 
     int bl1=0,bl2=0,bl3=0,bl4=0,bl5=0,bl6=0; //boletos x localidad
	 while( loc!=0 && boletos!=0 ){
	    printf("\nIngrese el numero de la zona: 1-6: (0 para terminar) ");
		scanf("%d", &loc);
		printf("\nIngrese la cantidad de boletos: (0 para terminar)");
		scanf("%d", &boletos);
		
		switch(loc){
			case 1: printf("\n Venta hecha zona 1 $%lf x %d boletos total = $%lf",l1,boletos, l1*boletos);
                    bl1+=boletos;
					break;				
			case 2: 
                    break;
			case 3: 
                    break;
			case 4: 
                    break;
			case 5: 
                    break;
			case 6: 
			        break;
			default: printf("\n\a Zona inexistente");
		}
		
			
	 	
	 }
	printf("\n Boletos vendidos por localidad: bl1=%d",bl1);
}

int main( int x ) {
    // leer precios para las seis localidades
	// leer las ventas
//	 global--;
//	 printf("\n global = %d", global);
	 leerPreciosLoc();
	 printf("\n Precio de la localidad 4 = $%.2lf ",l4);
	 leerVentas();
	return 0;
}
