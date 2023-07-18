#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float area(float l1 , float l2, float l3);
char* tipo(float l1 , float l2, float l3);
int main(int argc, char *argv[]) {
	
	float n1, n2, n3, a;
	char *t;
	//float area;
	
	printf("Introduce el primer numero ");
	scanf("%f", &n1);
	printf("Introduce el segundo numero ");
	scanf("%f", &n2);
	printf("Introduce el tercer numero ");
	scanf("%f", &n3);
	
	//comparaciones
	/*
	if(n1>n2){
		if(n1>n3){
			l1=n1;
			if(n2>n3){
				l2=n2;
				l3=n3;
			}else{
				l2=n3;
				l3=n2;
			}
		}
	}else{
	 	if(n2>n1){
			if(n2>n3){
				l1=n2;
				if(n1>n3){
					l2=n1;
					l3=n3;
				}else{
					l2=n3;
					l3=n1;
				}
			}
		}
	}
	if(n3>n2){
		if(n3>n1){
			l1=n3;
			if(n2>n1){
				l2=n2;
				l3=n1;
			}else{
				l2=n1;
				l3=n2;
			}
		}
	}	
	*/
	//comprobacion
	if(n1+n2 > n3){
		if(n1+n3 > n2){
			if(n2+n3 > n1){
				a = area(n1, n2, n3);
				t = tipo(n1,n2,n3);
				printf("Estos numeros corresponden a los lados de un triangulo %s de area %.2f", t, a);
			}else{
				printf("Estos numeros no corresponden a los lados de un triangulo ");
			}
		}else{
			printf("Estos numeros no corresponden a los lados de un triangulo ");
		}
	}else{
		printf("Estos numeros no corresponden a los lados de un triangulo ");
	}
	
	//area
	
	return 0;
	
	
}
float area(float l1, float l2, float l3){
		//float l1 = n1, l2 = n2, l3=n3;
		float area_t, s;
		s = (l1+l2+l3)/2;
		area_t = sqrt(s*(s-l1)*(s-l2)*(s-l3));
		return area_t;
	}
char* tipo(float l1, float l2, float l3){
		//float l1 = n1, l2 = n2, l3=n3;
		char *tipo;
		if(l1==l2 & l2==l3){
			tipo = "Equilatero";
		}
		if(l1==l2 & l2!=l3){
			tipo = "Isoseles";
		}
		if(l1==l3 & l2!=l3){
			tipo = "Isoseles";
		}
		if(l3==l2 & l2!=l3){
			tipo = "Isoseles";
		}
		if(l1!=l2 & l2!=l3){
			tipo = "Escaleno";
		}
		return tipo;
	}	
