#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
	struct alumno{
		char nom[30];
		int edad;
		float prom;
	}
	a1,
	a2= {"Robert", 19, 9.5},
	a3= {"Carlos", 21, 6},
	a4= {"selen", 20, 7},
	a5= {"Macchia", 20, 8},
	a[5];
	
	void leerAlum(struct alumno a1){
		printf("\nDame el nombre del alumno: ");
		fflush(stdin);
		scanf("%s",a1.nom);
		fflush(stdin);printf("\nDame la edad del alumno: ");
		fflush(stdin);
		scanf("%i",&a1.edad);
		fflush(stdin);printf("\nDame el promedio del alumno: ");
		fflush(stdin);
		fflush(stdin);scanf("%f", &a1.prom);
		
		fflush(stdin);printf("\n%s\n%i\n%.1f\n", a1.nom, a1.edad, a1.prom);
		fflush(stdin);atosAlumn(a1,a2,a3,a4,a5);
	}
	
	void datosAlumn(struct alumno a1, struct alumno a2, struct alumno a3, struct alumno a4, struct alumno a5){
		int lon1 = strlen(a1.nom), lon2 = strlen(a2.nom), lon3 = strlen(a3.nom), lon4 = strlen(a4.nom), lon5 = strlen(a5.nom);
		
		if(lon1>lon2 && lon1>lon3 && lon1>lon4 && lon1>lon5){
			printf("\nEstudiante con el nombre mas largo:\n%s\n%i\n%.1f", a1.nom, a1.edad, a1.prom);
		} 
		if(lon2>lon1 && lon2>lon3 && lon2>lon4 && lon2>lon5){
			printf("\nEstudiante con el nombre mas largo:\n%s\n%i\n%.1f", a2.nom, a2.edad, a2.prom);
		} 
		if(lon3>lon2 && lon3>lon1 && lon3>lon4 && lon3>lon5){
			printf("\nEstudiante con el nombre mas largo:\n%s\n%i\n%.1f", a3.nom, a3.edad, a3.prom);
		} 
		if(lon4>lon2 && lon4>lon3 && lon4>lon1 && lon4>lon5){
			printf("\nEstudiante con el nombre mas largo:\n%s\n%i\n%.1f", a4.nom, a4.edad, a4.prom);
		} 
		if(lon5>lon2 && lon5>lon3 && lon5>lon4 && lon5>lon1){
			printf("\nEstudiante con el nombre mas largo:\n%s\n%i\n%.1f", a5.nom, a5.edad, a5.prom);
		}
		
		
			printf("\n\t Estudiantes con promedio igual o mayor a 8");
		if(a1.prom>=8){
			printf("\nNombre: %s", a1.nom);
			printf("\nEdad: %i", a1.edad);
			printf("\nPromedio: %.1f\n", a1.prom);
		}
		if(a2.prom>=8){
			printf("\nNombre: %s", a2.nom);
			printf("\nEdad: %i", a2.edad);
			printf("\nPromedio: %.1f\n", a2.prom);
		}
		if(a3.prom>=8){
			printf("\nNombre: %s", a3.nom);
			printf("\nEdad: %i", a3.edad);
			printf("\nPromedio: %.1f\n", a3.prom);
		}
		if(a4.prom>=8){
			printf("\nNombre: %s", a4.nom);
			printf("\nEdad: %i", a4.edad);
			printf("\nPromedio: %.1f\n", a4.prom);
		}
		if(a5.prom>=8){
			printf("\nNombre: %s", a5.nom);
			printf("\nEdad: %i", a5.edad);
			printf("\nPromedio: %.1f\n", a5.prom);
		}
		 
			printf("\n\tEstudiantes mayores de 18");
		if(a1.edad>=18){
			printf("\nNombre: %s", a1.nom);
			printf("\nEdad: %i", a1.edad);
			printf("\nPromedio: %.1f\n", a1.prom);
		}
		if(a2.edad>=18){
			printf("\nNombre: %s", a2.nom);
			printf("\nEdad: %i", a2.edad);
			printf("\nPromedio: %.1f\n", a2.prom);
		}
		if(a3.edad>=18){
			printf("\nNombre: %s", a3.nom);
			printf("\nEdad: %i", a3.edad);
			printf("\nPromedio: %.1f\n", a3.prom);
		}
		if(a4.edad>=18){
			printf("\nNombre: %s", a4.nom);
			printf("\nEdad: %i", a4.edad);
			printf("\nPromedio: %.1f\n", a4.prom);
		}
		if(a5.edad>=18){
			printf("\nNombre: %s", a5.nom);
			printf("\nEdad: %i", a5.edad);
			printf("\nPromedio: %.1f\n", a5.prom);
		} 
	}

	void leerAA(struct alumno a[]){
		int i;
		for(i=0 ; i<5 ; i++){
			printf("\nDame el nombre del Estudiante %i: ", i+1);
			fflush(stdin);
			scanf("%s", a[i].nom);
			printf("\nDame la edad del Estudiante: ");
			fflush(stdin);
			scanf("%i", &a[i].edad);
			printf("\nDame el promedio del Estudiante: ");
			fflush(stdin);
			scanf("%f", &a[i].prom);fflush(stdin);
			printf("\n");fflush(stdin);
		}
		
		
		int lon1 = strlen(a[0].nom), lon2 = strlen(a[1].nom), lon3 = strlen(a[2].nom), lon4 = strlen(a[3].nom), lon5 = strlen(a[4].nom);
		
		if(lon1>lon2 && lon1>lon3 && lon1>lon4 && lon1>lon5){
			printf("\nEstudiante con nombre mas largo:\n%s\n%i\n%.1f", a[0].nom, a[0].edad, a[0].prom);
		} 
		if(lon2>lon1 && lon2>lon3 && lon2>lon4 && lon2>lon5){
			printf("\nAEstudiante con nombre mas largo:\n%s\n%i\n%.1f", a[1].nom, a[1].edad, a[1].prom);
		} 
		if(lon3>lon2 && lon3>lon1 && lon3>lon4 && lon3>lon5){
			printf("\nEstudiante con nombre mas largo:\n%s\n%i\n%.1f", a[2].nom, a[2].edad, a[2].prom);
		} 
		if(lon4>lon2 && lon4>lon3 && lon4>lon1 && lon4>lon5){
			printf("\nEstudiante con nombre mas largo:\n%s\n%i\n%.1f", a[3].nom, a[3].edad, a[3].prom);
		} 
		if(lon5>lon2 && lon5>lon3 && lon5>lon4 && lon5>lon1){
			printf("\nEstudiante con nombre mas largo:\n%s\n%i\n%.1f", a[4].nom, a[4].edad, a[4].prom);
		}
		
		
			printf("\n\tEstudiantes con promedio igual o mayor a 8");
			for(i=0 ; i<5 ; i++){
				if(a[i].prom>=8){
					printf("\nNombre: %s", a[i].nom);
					printf("\nEdad: %i", a[i].edad);
					printf("\nPromedio: %.1f\n", a[i].prom);
				}
			}
		 
			printf("\n\tEstudiante mayores de  18 ");
			for(i=0 ; i<5 ; i++){
				if(a[i].edad>=18){
					printf("\nNombre: %s", a[i].nom);
					printf("\nEdad: %i", a[i].edad);
					printf("\nPromedio: %.1f\n", a[i].prom);
				}
			}
	}


int main(int argc, char *argv[]) {
system("cls");
				leerAlum(a1);
				printf("\n\------ PE de Alumnos ------ \n\n");
				leerAlumArr(a);		system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");return 0;
}
