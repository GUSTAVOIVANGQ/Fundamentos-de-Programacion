#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int n, y, r, i;
	int d;		       	
	system("color 9");
	printf(" ----Bienvenido al programa 3.8----");
									   							
	printf(" \n\n Ingrese los n valores va a querer: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("\t\t ---- Valor %d ---- \n", i);
	printf(" \n\n Ingrese el valor de y: \n");
	scanf("%d",&y);
	if(y>0 && y<=15){
		r=(pow(y,2)+15);
	} 
	else if(y>15 && y<=30){
		r=(pow(y,3)-pow(y,2)+12);
	}
	else if(y>30 && y<=60){
		r=(4*pow(y,3)/pow(y,2)+8);
	}
	else if(y>60){
		r=0;
	}
	printf(" \n  El resultado es %d \t ", r  );
	}
	printf(" \n\n\t\t Gracias por su visita :)");
	return 0;
}
