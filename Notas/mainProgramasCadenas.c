#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu();
void registrar(char c[30]);
void imprimir(char c[30]);
void ingresarFecha();
void separarFecha(char fecha1[10]);
void escribirF(char dd[2], char mm[2], char aa[4]);
void leer();
void minMay(char cad50[50]);
void leerCadenas();
void intercalar(char cad1[50], char cad2[50]);
void leerFrase();
void NumPalabras(char cadena50[50]);
void revertir(char cadena50[50], int veces);
void invP(char cadenaInvertida[50], char cinvP[50], int largo);
void info();
void datosAlumno(struct alumno a1, struct alumno a2, struct alumno a3, struct alumno a4, struct alumno a5);
int main(int argc, char *argv[]) {
	menu();
	return 0;
}

void menu(){
int sel;
char c[30], opt[5];
	do{
	printf("\t\t\t\t\tBIENVENIDO AL MENU DE PROGRAMAS");
	printf("\nSeleccione una opcion: \n1.- PS7.3\n2.- PS7.4\n3.- PS7.5\n4.- PS7.8\n5.- PS7.9\n6.- PE\n ");
	scanf("%d", &sel);
	
	switch(sel){
		case 1:
			system("cls");
			registrar(c);
			imprimir(c);
		break;
		case 2: 
		    system("cls");
		    ingresarFecha();
		break;
		case 3:
			system("cls");
			leer();
		break;
		case 4:
			system("cls");
			leerCadenas();
		break;
		case 5:
		    system("cls");
			leerFrase(); 
		break;
		case 6:
			system("cls");
				struct alumno;
				void info();
		break;
		}
	fflush(stdin);
	printf("\n\n%cDesea repetir el programa?",168);
	scanf("%s", &opt);
	
	}while(strcmp("Si", opt)||strcmp("si", opt));
}

//________________________________________________________________________________
void registrar(char c[30]){
	printf("\t\tBienvenido al programa PS7.3\n");
	printf("Ingrse un texto:\n");
	fflush(stdin);
	gets(c);
}

void imprimir(char c[30]){
	int i,p;
	p=strlen(c);
	for(i=p;i<=30;i++){
		c[i]='-';
	}
	printf("\n\nResultado: \n");
	puts(c);
	
}
//__________________________________________________________________________________
void ingresarFecha(){
	char fecha1[10];
	printf("\t\tBienvenido al programa PS7.4\n");
	printf("\t\tIngrese una fecha (dd/mm/aaaa): ");
	fflush(stdin);
	gets(fecha1); 
	separarFecha(fecha1);
}

void separarFecha(char fecha1[10]){
	int i=0, j=0, d=0, d1=1, k,l;
	char mm[2], dd[2], aa[4];
	while(fecha1[i] != '/' && fecha1[i] != '\0')
	i++;
	if(fecha1[i] != '\0')
	i++;
	while(fecha1[i] != '/' && fecha1[i] != '\0'){
		mm[j]=fecha1[i];
		i++;
		j++;
	}
	mm[j]='\0';
	
	for( k=0 ; k<=d1 ; k++){
		dd[k] = fecha1[k+d];
	}
	dd[k]='\0';
	
	for( l=0 ; l<=10 ; l++){
		aa[l] = fecha1[l+6];
	}
	aa[l]='\0';
	
	escribirF(dd,mm,aa);
}

void escribirF(char dd[2], char mm[2], char aa[4]){
	int opt;
	if(strcmp(mm,"01")==0){
		printf("\n\t %s de Enero del %s", dd,aa);
	}
	if(strcmp(mm,"02")==0){
		printf("\n\t %s de Febrero del %s", dd,aa);
	}
	if(strcmp(mm,"03")==0){
		printf("\n\t %s de Marzo del %s", dd,aa);
	}
	if(strcmp(mm,"04")==0){
		printf("\n\t %s de Abril del %s", dd,aa);
	}
	if(strcmp(mm,"05")==0){
		printf("\n\t %s de Mayo del %s", dd,aa);
	}
	if(strcmp(mm,"06")==0){
		printf("\n\t %s de Junio del %s", dd,aa);
	}
	if(strcmp(mm,"07")==0){
		printf("\n\t %s de Julio del %s", dd,aa);
	}
	if(strcmp(mm,"08")==0){
		printf("\n\t %s de Agosto del %s", dd,aa);
	}
	if(strcmp(mm,"09")==0){
		printf("\n\t %s de Septiembre del %s", dd,aa);
	}
	if(strcmp(mm,"10")==0){
		printf("\n\t %s de Octubre del %s", dd,aa);
	}
	if(strcmp(mm,"11")==0){
		printf("\n\t %s de Noviembre del %s", dd,aa);
	}
	if(strcmp(mm,"12")==0){
		printf("\n\t %s de Diciembre del %s", dd,aa);
	}
	printf("\n\n%cDesea ir al menu?(1=SI , 0=NO)",168);
	scanf("%i", &opt);
	if(opt==1){
		system("cls");
		fflush(stdin);
		menu();
	}	
}
//__________________________________________________________________
void leer(){
	char cad50[50];
	printf("Bienvenido al programa PS7.5\n\n");
	printf("Ingresa un texto: \n");
	fflush(stdin);
	gets(cad50);
	minMay(cad50);
}	
	
void minMay(char cad50[50]){
	int i, opt;
		
	cad50[0] = toupper(cad50[0]);
		
	for(i=1; i<=50 ; i++){
			
		if(isspace(cad50[i])){
			cad50[i+1] = toupper(cad50[i+1]);
		}
	}
	printf("\n");
	puts(cad50);
	printf("\n\n%cDesea ir al menu?(1=SI , 0=NO)",168);	
	scanf("%i", &opt);
	if(opt==1){
		system("cls");
		fflush(stdin);
		menu();
	}	
}
//__________________________________________________________________________
void leerCadenas(){
	char cad1[50], cad2[50];
	printf("Bienvenido al programa PS7.8\n\n");
	printf("Ingresa una cadena de caracteres: \n");
	fflush(stdin);
	gets(cad1);
	printf("Ingresa otra cadena de caracteres: \n");
	fflush(stdin);
	gets(cad2);
	intercalar(cad1,cad2);
}	

void intercalar(char cad1[50], char cad2[50]){
	char cad3[100];
	int i, j, k, opt; 
	for(i=0 ; i<50 ; i++){
		printf(" %c",cad1[i]);
		if(isspace(cad1[i])==0){
			for(j=0 ; j<50 ; j++){
				printf(" %c ", cad2[j]);
				if(isspace(cad1[i])==0){
					break; 
				}
			}
		}
	}
	printf("\n\n%cDesea ir al menu?(1=SI , 0=NO)",168);	
	scanf("%i", &opt);
	if(opt==1){
		system("cls");
		fflush(stdin);
		menu();
	}	
}
//_________________________________________________________________________________________
	
void leerFrase(){
	char cadena50[50];
	printf("\t\tBienvenido al programa PS7.9\n\n");
	printf("\n\t Ingresa una frase: ");
	fflush(stdin);
	gets(cadena50);
	
	strcat(cadena50," ");
	
	char *cad0= "";
	int i=0;
	cad0 = strstr(cadena50," ");
	while(strcmp(cadena50," ")){
		strcpy(cadena50,cad0);
		i++;
		cad0=strstr(cadena50 + 1," ");
	}
	printf("\n\t %i",i);	
	revertir(cadena50,i);
}
	
void revertir(char cadena50[50], int veces){
	int largo, i,j; 
	char cadenaInvertida[50], cinvP[50];
	largo = strlen(cadena50);
	for(i=0; i<=largo; i++){
		cadenaInvertida[i] = cadena50[largo-i-1];
	} 
	puts(cadenaInvertida);
	invP(cadenaInvertida,cinvP,largo);
}

void invP(char cadenaInvertida[50], char cinvP[50], int largo){
	int i, k, larg1, m, l;
	larg1=0;
	l=0;

	for( ; isspace(cadenaInvertida[k])==0 && k<largo ; k++){
			larg1++;
	}
	m += larg1;
	for( ; l<larg1 ; i++, l++){
		
			cinvP[i] = cadenaInvertida[m-l-1];			
			//printf("\ncinv: %i = %c", m-l-1, cinv[m-l-1]);
			//printf("\ncinvP: %i = %c", i, cinvP[i]);
	}
				
	cinvP[i] = ' ';
	i++, k++, m++;	
	if(i<largo && larg1 !=0){
		invP(cadenaInvertida,cinvP,largo);
	}
	puts(cinvP);
}
//__________________________________________________________________________
struct alumno
{
	char nombre[30];
	int edad;
	float promedio; 
};

void info ()
{
char nombre[30];
int edad; 
float prmedio; 
 struct alumno a1, a2={"Abraham", 18, 8.1}, a3={"Maria", 22, 7.3}, a4={"Josefina",15,9.1}, a5={"Omar", 12, 6.5} ,a[5];
	
	printf("\tIngrese el nombre del alumno 1: ");
	gets(a1.nombre);
	printf("\tIngrese la edad del alumno 1: ");
	scanf("%d",&a1.edad);
	fflush(stdin);
	printf("\tIngrese el promedio del alumno 1: ");
	scanf("%f",&a1.promedio);
	fflush(stdin);
	printf("\n%s\n%i\n%.1f\n", a1.nombre, a1.edad, a1.promedio);
	datosAlumno(a1,a2,a3,a4,a5);
}

void datosAlumno(struct alumno a1, struct alumno a2, struct alumno a3, struct alumno a4, struct alumno a5){
	int t1=strlen(a1.nombre), t2=strlen(a2.nombre), t3=strlen(a3.nombre), t4=strlen(a4.nombre), t5=strlen(a5.nombre);
	if(t1>t2 && t1>t3 && t1>t4 && t1>t5){
		printf("\n\t Alumno con el nombre mas largo: %s %d %.2f", a1.nombre, a1.edad, a1.promedio);
	}
	if(t2>t1 && t2>t3 && t2>t4 && t2>t5){
		printf("\n\t Alumno con el nombre mas largo: %s %d %.2f", a2.nombre, a2.edad, a2.promedio);
	}
	if(t3>t1 && t3>t2 && t3>t4 && t3>t5){
		printf("\n\t Alumno con el nombre mas largo: %s %d %.2f", a3.nombre, a3.edad, a3.promedio);
	}
	if(t4>t1 && t4>t2 && t4>t3 && t4>t5){
		printf("\n\t Alumno con el nombre mas largo: %s %d %.2f", a4.nombre, a4.edad, a4.promedio);
	}
	if(t5>t1 && t5>t2 && t5>t3 && t5>t4){
		printf("\n\t Alumno con el nombre mas largo: %s %d %.2f", a5.nombre, a5.edad, a5.promedio);
	}
	
	printf("\n\tAlumnos con promedio mayor a 8: /t");
	if(a1.promedio>=8.0){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a1.nombre, a1.edad, a1.promedio);
	}
	if(a2.promedio>=8.0){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a2.nombre, a2.edad, a2.promedio);
	}
	if(a3.promedio>=8.0){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a3.nombre, a3.edad, a3.promedio);
	}
	if(a4.promedio>=8.0){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a4.nombre, a4.edad, a4.promedio);
	}
	if(a5.promedio>=8.0){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a5.nombre, a5.edad, a5.promedio);
	}
	
	printf("\n\n\tAlumnos mayores de 18: ");
	if(a1.edad>=18){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a1.nombre, a1.edad, a1.promedio);
	}
	if(a2.edad>=18){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a2.nombre, a2.edad, a2.promedio);
	}
	if(a3.edad>=18){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a3.nombre, a3.edad, a3.promedio);
	}
	if(a4.edad>=18){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a4.nombre, a4.edad, a4.promedio);
	}
	if(a5.edad>=18){
		printf("\n\tNombre: %s  Edad: %d Promedio: %.2f", a5.nombre, a5.edad, a5.promedio);
	}
}












