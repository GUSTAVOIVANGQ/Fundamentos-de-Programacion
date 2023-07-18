#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]) {
	char cad[30];
int i=0, j=0, k;
printf("\nIngrese una cadena de caracteres: ");
fflush(stdin);
gets(cad);
while (cad[i]!= '\0')
{
if (cad[i]==' '){
	j= i+1 ;
}
if (i==j){

fflush(stdin);
printf("%c", toupper(cad[i+1]));	  
	}else{
fflush(stdin);
printf("%c", cad[i]);	  
		
	}	
i++;
}	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");
return 0;

}
