#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int var1,var2;
   printf("Ingrese el valor de la var1:");
   scanf("%d", &var1);
   printf("\n Ingrese el valor de la var2:");
   scanf("%d", &var2);


	if(var1 == var2)
{
printf("\t%d es igual que %d", var1, var2);
}

//if(var1 = var2)
//{
// printf("\n\t = %d es igual que %d", var1, var2);
//}

if(var1 <= var2)
{
printf("\n\t<= %d es menor o igual que %d", var1, var2);
}

if(var1 != var2 && (var1+10) == var2)
{
printf("\n\t&& %d es menor en 10 unidades que %d", var1, var2);
}
	return 0;
}
