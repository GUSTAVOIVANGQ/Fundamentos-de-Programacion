#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	   int i, n1, n2, n3, n4, n5;
	printf(" \t\t ------- p 3.7.1 Programa del asterisco ------- \n\n ");
   printf(" Dame el numero 1 = \n" ) ;
   printf(" 1\n") ;
	n1=1;												            
   printf(" Dame el numero 2 =  \n" ) ;
   printf(" 40 \n") ;
	n2=40;

   printf(" Dame el numero 3 =  \n" ) ;
	scanf("%d",&n3);						   
   printf(" Dame el numero 4 =  \n" ) ;
	scanf("%d",&n4);						   
   printf(" Dame el numero 5 =  \n" ) ;
	scanf("%d",&n5);						   

   printf("\n\n n1= 1");
	for(i=1;i<=n1;i++){
   printf("*") ;
	}
   printf("\n");
   printf("\n n2= 40");
	for(i=1;i<=n2;i++){
   printf("*") ;
	}
   printf("\n");
   printf("\n n2= %d", n3);
	for(i=1;i<=n3;i++){
   printf("*") ;
	}
   printf("\n");
   printf("\n n4 = %d", n4);
	for(i=1;i<=n4;i++){
   printf("*") ;
	}
   printf("\n");
   printf("\n n5 = %d", n5 );
	for(i=1;i<=n5;i++){
   printf("*") ;
	}
   printf("\n");
	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");
							 
	return 0;
}
