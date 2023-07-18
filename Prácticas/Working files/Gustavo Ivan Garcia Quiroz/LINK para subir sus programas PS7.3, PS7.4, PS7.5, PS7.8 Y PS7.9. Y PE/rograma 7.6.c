#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]) {
	char cad[30],cad1[30];
int i=0, j=0, k=0, x=0;
int a=0, b=0, c=0;
printf("\nIngrese una cadena de caracteres 1 : ");
fflush(stdin);
gets(cad);
printf("\nIngrese una cadena de caracteres 2 : ");
fflush(stdin);
fflush(stdin);
gets(cad1);
strcat(cad1, " ");
strcat(cad, " "); 
while (i!= 90)
{
if (cad[i]==' '){
	j= i ;
	for (i=k;i<j;i++)
{
printf("%c", cad[i]);	  
}
k=i+1;
	}else{
	}
printf(" ");	  
if (cad[a]==' '){
	c= a;
	for (a= b  ; a<c; a++)
{
printf("%c", cad1[a]);	  
}
b=a+1;
	}else{
	}
a++;

i++;
}
	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");return 0;

}
