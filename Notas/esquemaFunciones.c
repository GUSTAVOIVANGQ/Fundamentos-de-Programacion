#include <stdio.h>   
#include <stdlib.h>
int cuadrado();   // prototipo de una funcion, o bloque o procedimiento
int triangulo();
int main(int argc, char *argv[]) {
   // ascii 185-188  y 200 al 206
   printf("Square");
   cuadrado(); 
   cuadrado();
   cuadrado();  
   triangulo();
	return 0;
}
int cuadrado()  {
	    printf("\n%c%c%c%c%c%c%c", 201, 205,205,205,205,205,187 );
        printf("\n%c     %c", 186, 186 );
        printf("\n%c     %c", 186, 186 );
        printf("\n%c%c%c%c%c%c%c", 200, 205,205,205,205,205,188 );
    return 0;    
}
 
int triangulo()  {
	    printf("\nTriangle" );
        int base = 10;  
        int altura = 15;
		printf("\n area = %d ", base * altura /2 );
		cuadrado();
	return 0;    
}    



       // printf("\n\n\n%c",c); 
       // printf("\n\n\n%.0lf",l); 
        //printf("\n\n\n%d",10/-3); 
       // printf("\n\n\n%d",10%(-3)); 

/*
	char c = 63;
	     printf("\n\n\n\n\n\n\n\n\n\n c = %c", c);
	     c = '?';
	     printf("\n c = %c", c);
	     
    int i = 20, j = 3, k = 2;
    int r = (i - j) % k;
    printf("\n r = %d", r);
        r = i + j / k - 4 * r;
           // i +   1   - 4
    printf("\n r = %d", r);

*/
   // char c=253;
   // double l= 2150000000;   

