#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int sabor;
   printf("Selector Multiple  Helados 0 o 1.Fresa 2.Chocolate 3.Limon \
         4.Nuez 5.Vainilla  Elige 1-5 ");
   scanf("%d", &sabor);
         
		 // acepta enteros (int o long o short)  char
   switch(sabor){ 
   	     case 0:    // 
		 case 1:   // if(sabor == 0 || sabor == 1)
   	     	        printf("\nFresa");
   	     	        printf("\nAbundante en Vitamina C"); 
				    break;	     	        
   	     case 2:     // if (sabor == 2)
                      printf("\nChocolate");
					  printf("\n Te alegra el dia");
					  break;			
		 case 3:     // if (sabor == 3)
		              printf("\nLimon");
					  printf("\n Abundante en la Vitamina C");			
		     
		 case 4:	
		 
		 case 5:
		 
		 default:	printf("\n Opcion incorrecta");
   	                break; // opcional si el default esta al final 
   } 

    printf("\nDisfrute su helado , Vuelva pronto");

	return 0;
}
