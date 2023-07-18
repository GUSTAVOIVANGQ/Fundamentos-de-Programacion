#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]) {
	char cad[30];
int i=0, j=0, k=0;
int a=0, b=0, c=0;
printf("\nIngrese una cadena de caracteres: ");
fflush(stdin);
gets(cad);
strcat(cad, " ");
while (cad[i]!= '\0')
{
	i++;
}
fflush(stdin);
i--;
a=i;
fflush(stdin);
for (j=i; j>=0;j--)
{
fflush(stdin);
if (cad[j]==' '){

for (k=j; k<=a; k++)
{
printf("%c", cad[k]);	  
fflush(stdin);
}
fflush(stdin);
a= j ;}else{

}
}
while (cad[c]!=' ')
{
printf("%c", cad[c]);	  
	c++; 
}

return 0;

}
