// ps3.15
#include <stdio.h>
#include <stdlib.h>

int menor(int n1, int n2){
	if(n1<n2){
		return n1;
	}
    return n2;
}

int mcd(int n1, int n2){
	int min = menor(n1,n2);
	int max = 1;
	int i;
	for(i=2; i<= min;                     i++){
		if(n1 % i == 0 && n2 % i == 0){
			// i divide exactamente a n1 y a n2
			max = i;
		}
	}
	return max;
}




int main(int argc, char *argv[]) {
	printf("mcd = %d",mcd(84,205));
	return 0;
}





