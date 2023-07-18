#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print(int cuadro[8][8]){
    int i,j;   //renglones
	for (i=0;  i<8 ; i++){
	     // CADA RENGLON
	     for(j=0; j<8; j++){
	     	printf(" cuadro[%d][%d]=%d",i,j, cuadro[i][j]);	
		 }     //                 i   j
		         //               0   0...7
		           //             1   0...7
		             //           7   0..7
		printf("\n");
	}        
}

void asignar(int cuadro[8][8],int renglon, int valor){
	int i;
	for(i=0;i<8;i++)
    {
     cuadro[renglon][i]=valor;
    }
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "spanish");
               //renglones x columnas
    int cuadro[8][8]={ 0,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1     };
    //printf("Primer elemento seg rengl= %d", cuadro[1][0]);
    printf("\nÚltimo elemento seg rengl = %d", cuadro[1][7]);
                                 // Ú : alt +233
    //printf("\n%cltimo elemento = %d", 233,cuadro[7][7]);
	print(cuadro);
    // asignar el valor de 53
	//  a cada elemento del 6o renglon
	//cuadro[5][0]=53;
	int i;
	for(i=0;i<8;i++)
    {
     cuadro[5][i]=53;
    }
    print(cuadro);
    
	asignar(cuadro, 0, -333);
	//     cuadro[5][0]=53;
	  //   cuadro[5][1]=53;
	    // cuadro[5][2]=53;
	     //cuadro[5][7]=53;
	print(cuadro);  
/*	
	ASIGNAR AL RENGLON 0, EL VALOR 0
	asignar(cuadro, 0, 0);
	asignar(cuadro, 1, 1);
	asignar(cuadro, 7, 7);
	for(i=0; i<8; i++  ){
		asignar(cuadro, i, i);
	}
	
	for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
{
cuadro[i][j]=i;
}
}
	
	ASIGNAR AL RENGLON 1, EL VALOR 1
	ASIGNAR AL RENGLON 2, EL VALOR 2
	ASIGNAR AL RENGLON 3, EL VALOR 3
	ASIGNAR AL RENGLON 7, EL VALOR 7
*/	
	
	return 0;
}
