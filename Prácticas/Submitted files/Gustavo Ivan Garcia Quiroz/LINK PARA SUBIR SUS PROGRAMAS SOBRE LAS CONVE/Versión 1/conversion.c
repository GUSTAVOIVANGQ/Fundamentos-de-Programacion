#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float d1, res;
	int op;
		
	printf("\t\t Elige una opcion: \n ");
	printf(" 1. pulgadas a milimetros\n ");
	printf(" 2. yardas a metros\n ");
	printf(" 3. millas a kil%cmetros\n ", 162);
	scanf("%d",&op);
								   			 
	switch(op){
		case 1:{
			printf("\n\n Dame las pulgadas: \n ");
			scanf("%f",&d1);
			res=(d1*25.40);
			printf("\t\n Los mil%cmetros son: %.2f\n", 161, res);
			break;    
		}
		case 2:{
			printf("\n\n Dame las yardas: \n ");
			scanf("%f",&d1);
			res=(d1*0.9144);
			printf("\t\n Los metros son: %.2f\n", res);
			break;									
		}
		case 3:{
			printf("\n\n Dame las millas: \n ");
			scanf("%f",&d1);
			res=(d1*1.6093);
			printf("\t\n Los kil%cmetros son: %.2f\n", 162, res);
			break;
		}
		default:{
			printf("\t\n La opcion que escogiste no esta :(");
			break;
		}
	}
	printf("\n\n !gracias por su visita :)! ");
	return 0;
}
