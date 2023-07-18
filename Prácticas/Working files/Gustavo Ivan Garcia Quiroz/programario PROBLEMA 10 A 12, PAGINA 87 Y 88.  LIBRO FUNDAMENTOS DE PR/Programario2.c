#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu();
void prog1();
void prog2();
void prog3();

int main(int argc, char *argv[]) {
	menu();
			printf(" \n\n ");
			printf(" \t\t Gracias por su visita :) ");
	return 0;
}

void menu(){
	int op, op1;
	printf("\t\t------ PROGRAMARIO 2 ------ \n");
	printf("\n1 Horas Extra.");
	printf("\n2 Triangulos.");
	printf("\n3 Entero Completo.");
	printf("\nOpcion: ");
	printf("\nSeleccione un programa escribiendo el numero del mismo. \n");
	scanf("%d", &op);
	switch (op){
		case 1:{
			prog1();
			break;
		}
			
		case 2:{
			prog2();
			break;
		}
		case 3:{
			prog3();
			break;
		}
			
		break;
		default:
			system("color 4");
			printf(" \t\t Error :( \n\n ");
		break;
	}
}

void prog1(){
	int op, cat, h, sal;
    printf("\t\t ------Salario del trabajador-------- \n\n");
	printf("\nDeme su categoria de trabajador (1 - 4): \n");
	scanf("%d", &cat);
	if(cat>=4){
			system("color 4");
		printf("\n No hay pago >:)");
	}else{
		printf("\n Dame las horas extra que trabajo: \n");
		scanf("%d", &h);
		switch(cat){
			case 1:
				if(h>30)
				sal = 30*40;
				else
				sal = h*40;
			break;
			case 2:
				if(h>30)
				sal = 30*50;
				else
				sal = h*50;
			break;
			case 3:
				if(h>30)
				sal = 30*85;
				else
				sal = h*85;
			break;
		}
			system("color 2");
		if(h>30)
		printf("El aumento en su salario es de $%d, aunque trabajo %d horas extra solo podemos pagarle un maximo de 30 horas.\n",sal,h);
		else
		printf("El aumento en su salario es de $%d, ya que trabajo %d horas extra.",sal,h);
	}
}

void prog2(){
	float area;
	int op, s, a, b, c, t;
	printf("\nDame la longitud de 3 lados de un triangulo\n ");
	printf("Lado 1: ");
	scanf("%d", &a);
	printf("Lado 2: \n");
	scanf("%d", &b);
	printf("Lado 3: \n");
	scanf("%d", &c);
	if((a+b) > c && (a+c) > b && (b+c) > a){
		s = a+b+c;
		if(a==b && a==c)
			t = 1;
		if(a==b && a!=c || a==c && a!=b || b==c && b!=a)
			t = 2;
		if(a!=b && a!=c && c!=b)
			t = 3;
			
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		
		switch(t){
			case 1:
			system("color 2");
				printf("El area de su triangulo equilatero es %.2f cm^2",area);
			break;
			case 2:
			system("color 2");
				printf("El area de su triangulo isoceles es %.2f cm^2",area);
			break;
			case 3:
			system("color 2");
				printf("El area de su triangulo escaleno es %.2f cm^2",area);
			break;
		}
	}
	else						
		printf("Ni modo, los lados que ingreso no pertenecen a un triangulo \n");
}

void prog3(){
	int op, n, a, b, c, d, ap, bp, cp, dp;
	printf("\nIngrese un numero entero de 4 Digitos: \n");
	scanf("%d", &n);
	
	if(n>=1000){
		if(n<=9999){
			a = n/1000;
			b = (n%1000)/100;
			c = (n%1000)%100/10;
			d = ((n%1000)%100)%10;
		}
	}
	
	if(a%2>0 || b%2>0|| c%2>0 || d%2>0){
	printf("\nEl/los digito(s) ");
	if(a%2>0)
		printf("[%d]",a);		
	if(b%2>0)
		printf("[%d]",b);
	if(c%2>0)
		printf("[%d]",c);
	if(d%2>0)
		printf("[%d]",d);
			system("color 2");
	printf(" del numero %d es/son impar",n);
	}
	else
			system("color 2");
	printf("\nTodos los digitos del numero %d son par\n",n);

}
