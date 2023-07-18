#include <stdio.h>
#include <stdlib.h>
#include <math.h>
			
int ns, op, n1, n2, n3;
float tfa, tce;

int main(int argc, char *argv[]) {
	printf(" \t \t programas del 1 al 9 \n");
	printf(" 1. numero de sonidos de un grillo \n");
	printf(" 2. incremento del salario \n");
	printf(" 3. numero divisor de otro \n");
	printf(" 4. numero creciente \n");
	printf(" 5. tienda departamental \n");
	printf(" 6. el numero mayor \n");
	printf(" 7. valor de una funcion \n");
	printf(" 8. convertidor de pulgada, yarda, y milla \n");
	printf(" 9. convertidor de unidades de longitud, volumen y masa\n");
	printf(" Elige una opcion: \n");
	scanf("%d",&op);
	switch(op){
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
		case 4:{
		printf(" \t\t----Bienvenido al programa 4---- \n");
			printf("Dame el numero 1: \n");
			scanf ("%d",&n1);
			printf("Dame el numero 2: \n");
			scanf ("%d",&n2);
			printf("Dame el numero 3: \n");
			scanf ("%d",&n3);  	    
			int programa4=prog4( n1, n2, n3); // 1 o 0
			if (programa4==1){
			printf(" \n\n Estan en orden creciente \n");
			}
			else{
			printf(" \n\n No estan en orden creciente \n");
			}
			break;
		}
		case 5:{
			prog5();
			break;
		}
		case 6:{
			prog6();
			break;
		}
		case 7:{
			prog7();
			break;
		}
		case 8:{
			prog8();
			break;
		}
		case 9:{
			prog9();
			break;
		}
		default:{
			system("color 4");
			printf(" \n\n\t\t Error :(");
			break;
		}		
	}
	printf(" \n\n\t\t Gracias por su visita :)");
		   
	return 0;
}
		  		  
int prog1(){
	system("color 1");
	printf("\t\t Bienvenido al Programa 1 \n");
	printf("Dame el n%cmero de sonidos que emite el grillo: \n", 163);
	scanf("%d",&ns);
	tfa=(ns/4)+4;
	tce=(tfa-32)/1.8;
	printf(" \n\n El n%cmero de sonidos es: %d, temperatura en %cC es: %.3f \n", 163, ns, 167, tfa );
	return 0;
}
int prog2(){
	system("color 2");
	printf(" \t\t----Bienvenido al programa 2---- \n");
    float salario, s;
									 
    printf("Introduce el salario:");
    scanf("%f",&salario);
    if(salario<=18000){
       s= salario + (salario*.12);
       printf("Salario con incremento de 12 = %.2f",s);
    }
    else if((salario>=18000) && (salario <= 30000))
    {
       s= salario + (salario*.08);
       printf("Salario con incremento de 8 = %.2f",s);
    }
    else if((salario>=30000) && (salario <= 50000))
    {
       s= salario + (salario*.07);
       printf("Salario con incremento de 7 = %.2f",s);
    }
    else if(salario>=50001)
    {
       s= salario + (salario*.06);
       printf("Salario con incremento de 6 = %.2f",s);
    }
    else{
        printf("cantidad no es comparable!");
	}
}
int prog3(){
	int d1, d2, residuo;
	system("color 3");
	printf(" \t\t----Bienvenido al programa 2---- \n");
	printf(" \n\n Ingrese el numero 1: ");
	scanf("%d",&d1);
	printf(" \n\n Ingrese el numero 2: ");
	scanf("%d",&d2);
	residuo=(d1%d2);
	if(residuo==0){
	printf(" \n\n El n%cmero %d, es divisible entre el n%cmero %d", 163, d2, 163, d1 );
	}
	else{
	printf(" \n\n El n%cmero %d, no es divisible", 163, d2);
	}
}
int prog4(int n1, int n2, int n3){
	system("color 4");
	if(n1<n2 && n2<n3){
		return 1; // valor de verdad. es orden creciente
	}
	else{
		return 0; // valor vacio
	}
}
int prog5(){
	system("color 5");
	printf(" \t\t----Bienvenido al programa 5---- \n");
	float m, com ;
	int d;		       	
	printf(" \n\n Ingrese su monto de compra: ");
	scanf("%f",&m);
	if(m<800){
		d=0;
		com=m;
	}
	if(m>=800 && m<=1500){
		d=90;
		com=(m*0.90);
	}
	if(m>1500 && m<=5000){
		d=85;
		com=(m*0.85);
	}
	if(m>5000){
		com=(m*0.8);
	}
	printf("\n\n Su monto de compra: \t $%.2f ", m );
	printf(" \nSu descuento es: \t %c%d ", 37, d);
	printf(" \nSu monto total de compra es: \t $%.2f", com);
}
int prog6(){
	system("color 6");
	float a, b, c;
	printf(" \t\t----Bienvenido al programa 6---- \n");
			printf("Dame el numero 1: \n");
			scanf ("%f",&a);
			printf("Dame el numero 2: \n");
			scanf ("%f",&b);
			printf("Dame el numero 3: \n");
				scanf("%f",&c);  	    
	if(a>=b && a>=c){
			printf("\n\n El n%cmero mayor es %.2f \n", 163, a);
	}
	if(b>=a && b>=c){
			printf("\n\n El n%cmero mayor es %.2f \n", 163, b);
	}
	if(c>=a && c>=b){
			printf("\n\n El n%cmero mayor es %.2f \n", 163, c);
	}
}
int prog7(){
	system("color 7");
	printf(" \t\t----Bienvenido al programa 7---- \n");
	int y, mod;
	printf(" ingresa el valor de y\n ");
	scanf("%d",&y);
	mod=(y%4);
	if(mod==0){
			printf("\n\n El n%cmero elevado al cubo es %.2f \n", 163, pow(y,3));
	}
	if(mod==1){
			printf("\n\n El n%cmero elevado al cuadrado menos 14 entre el cubo de y es %.2f \n", 163, ((pow(y,2))-14)/pow(y,3));
	}
	if(mod==2){
			printf("\n\n El n%cmero elevado al cubo mas cinco es %.2f \n", 163, pow(y,3)+5);
	}
	if(mod==3){
			printf("\n\n El n%cmero elevado su raiz es %.2f \n", 163, sqrt(y));
		}
}
int prog8(){
	system("color 8");
	printf(" \t\t----Bienvenido al programa 8---- \n");
	float d1, res;
	int o;
         		
	printf("\t\t Elige una opcion: \n ");
	printf(" 1. pulgadas a milimetros\n ");
	printf(" 2. yardas a metros\n ");
	printf(" 3. millas a kil%cmetros\n ", 162);
	scanf("%d",&o);
				 								   			 
	if(o==1){
	   		printf("\n\n Dame las pulgadas: \n ");
			scanf("%f",&d1);
			res=(d1*25.40);
			printf("\t\n Los mil%cmetros son: %.2f\n", 161, res);
	}
	if(o==2){
			printf("\n\n Dame las yardas: \n ");
			scanf("%f",&d1);
			res=(d1*0.9144);
			printf("\t\n Los metros son: %.2f\n", res);
	}
	if(o==3){
			printf("\n\n Dame las millas: \n ");
			scanf("%f",&d1);
			res=(d1*1.6093);
			printf("\t\n Los kil%cmetros son: %.2f\n", 162, res);
		}
}
int prog9(){
	float valor, co;
	int opc;
	system("color 9");
	printf(" \t\t----Bienvenido al programa 9---- \n");
	printf(" \t\t Menu \n");
									
	printf("1. pulgada a milimetro\n");
	printf("2. yarda a metros \n");        
	printf("3. milla a metros \n");
	printf("4. pulgadas cuadradas a centimetros cuadrados\n");
	printf("5. pies cuadrados a centimetros cuadrados\n");
	printf("6. yardas cuadradas a metros cuadrados \n");
	printf("7. acre a hectareas\n");
	printf("8. millas cuadradas a kilometros cuadrados \n");
	printf("9. pies cubicos a metros cubicos \n");
	printf("10. yardas cubicos a metros cubicos \n");
	printf("11. pintas a litros \n");
	printf("12. galon a litros \n");
	printf("13. onzas a gramos \n");
	printf("14. libras a kilometros  \n");
	printf("15. ton. inglesas a toneladas \n");
	printf(" \n Dame la opcion para conversion	\n");
	scanf("%d",&opc);                         
	printf(" \n Dame la cantidad que quieres convertir	\n");
	scanf("%f",&valor);                         
				 							       
	switch(opc){
		case 1:{
			co=(valor*25.4);
			printf(" \n El resultado es %.2f pulgada igual a %.2f milimetros \n", valor, co);
			break;																
		}
		case 2:{
			co=(valor*0.9144);	
			printf(" \n El resultado es %.2f yardas igual a %.2f metros \n", valor, co);
			break;
		}
		case 3:{
			co=(valor*1.6093);	
			printf(" \n El resultado es %.2f millas igual a %.2f kilometros \n", valor, co);
			break;
		}
		case 4:{
			co=(valor*6.452);	
			printf(" \n El resultado es %.2f pulgadas cuadradas igual a %.2f centimetros cuadrados \n", valor, co);
			break;
		}
		case 5:{
			co=(valor*0.09290);	
			printf(" \n El resultado es %.2f pies cuadradas igual a %.2f metros cuadrados \n", valor, co);
			break;
		}
		case 6:{
			co=(valor*0.8361);	
			printf(" \n El resultado es %.2f yardas cuadradas igual a %.2f metros cuadrados \n", valor, co);
			break;
		}
		case 7:{
			co=(valor*0.4047);	
			printf(" \n El resultado es %.2f acre cuadradas igual a %.2f hectareas \n", valor, co);
			break;
		}
		case 8:{
			co=(valor*2.59);	
			printf(" \n El resultado es %.2f millas cuadradas igual a %.2f kilometros cuadrados \n", valor, co);
			break;
		}
		case 9:{
			co=(valor*0.02832);	
			printf(" \n El resultado es %.2f pies cubicos igual a %.2f metros cubicos \n", valor, co);
			break;
		}
		case 10:{
			co=(valor*0.7646);	
			printf(" \n El resultado es %.2f yardas cubicas igual a %.2f metros cubicos \n", valor, co);
			break;
		}
		case 11:{
			co=(valor*0.56826);	
			printf(" \n El resultado es %.2f pintas cubicas igual a %.2f litros \n", valor, co);
			break;
		}
		case 12:{
			co=(valor*4.54609);	
			printf(" \n El resultado es %.2f galon igual a %.2f litros \n", valor, co);
			break;
		}
		case 13:{
			co=(valor*28.35);	
			printf(" \n El resultado es %.2f onzas igual a %.2f gramos \n", valor, co);
			break;
		}
		case 14:{
			co=(valor*0.45359);	
			printf(" \n El resultado es %.2f libras igual a %.2f kilometros \n", valor, co);
			break;
		}
		case 15:{
			co=(valor*1.0160);	
			printf(" \n El resultado es %.2f ton. inglesas igual a %.2f toneladas \n", valor, co);
			break;
		}
		default:{
			system("color 4");
			printf(" \n\n\t\t Error :(");
			break;
		}
	}
												    	
}

