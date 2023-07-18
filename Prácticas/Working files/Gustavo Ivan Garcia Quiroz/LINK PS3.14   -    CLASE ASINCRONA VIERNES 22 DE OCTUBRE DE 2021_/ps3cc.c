#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* rps31c   un this program using the console pauser or add your own getch, system("pause") or input loop */
    
int main(int argc, char *argv[]) {
	int n, y, r, i;
	printf(" ----Bienvenido al programa 3.8----");
	printf(" \n\n Dame el valor n que va a querer: \n");
	scanf("%d",&n);

	seno(n);

	system("color 9");
	printf(" \n\n\t\t Gracias por su visita ");
	return 0;
}

int factorial(int t){
	int r=1, z;
	for(z=1;z<=t;z++){
	r=r*z;	
	}
return r;
}

int esPrimo(int n){
	 int i;
	 for(i=2;  i<n   ; i++ ){
	 	if( n%i == 0 ){ // n fue dividido por i de manera exacta i.e con residuo == 0
		   return; // da por terminada la funcion esPrimo, salta a la 21
		 }
	 }
		return n;
}
			  			  
void seno(int s){
	int i, r=0, x=0, p, nt, se=0,pr[50];	
															   		 	 					 
    for( i = 1; i<=s; i++  ){
	    r=esPrimo(i);
	 	if(r==0){
		 }else{
		while(nt<=0.001){
		x++;
		if(x%2==0){
		se=(pow(s,r))/factorial(r);
		p=p-se;
		}else{
		se=(pow(s,r))/factorial(r);
		p=p+se;
		}
		pr[x]=p;
		nt=pr[x]-pr[x-1];
		printf("\n en el paso %d  el resultado de seno(x) es %d \n", x, pr[x]);
		}
		 }
	}
}

