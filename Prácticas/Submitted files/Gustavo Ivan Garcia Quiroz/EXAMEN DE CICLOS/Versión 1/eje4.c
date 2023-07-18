#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	float c;
	printf(" \t\t ------- p 3.7.6 Programa de valores fahrenheit a celsius  ------- \n\n ");
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n  ", 201, 205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("%c Tabla de conversion %c \n  ", 186, 186 );
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  \n  ", 200, 205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205, 188);
			  																																																															
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n  ", 201, 205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("%c %cf              %cc  %c \n  ", 186, 248,248, 186 );
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  \n  ", 204, 205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205, 185);
	for(i=0;i<=300;i=i+20){
		c=(i-32)/1.800;		        			   
	if(i==40){
	printf("%c %d%c          %.3f%c %c  \t\n  ", 186,i, 248,c,248,186);
	}else	if(i>=100 && i<=200){
	printf("%c %d%c        %.3f%c %c  \t\n  ", 186,i, 248,c,248,186);
	}else if(i>=220){
	printf("%c %d%c       %.3f%c %c  \t\n  ", 186,i, 248,c,248,186);
	}else{
	printf("%c %d%c         %.3f%c %c  \t\n  ", 186,i, 248,c,248,186);
	}
	}
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  \n  ", 200, 205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205, 188);
	system("color 2");
	printf(" \n\n\t\t Gracias por su visita :)");


	return 0;
}
