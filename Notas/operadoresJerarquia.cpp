#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char c = 63;
	     printf("\n\n\n\n\n\n\n\n\n\n c = %c", c);
	     c = '?';
	     printf("\n c = %c", c);
	     
    int i = 20, j = 3, k = 2;
    int r = (i - j) % k;
    printf("\n r = %d", r);
        r = i + j / k - 4 * r;
           // i +   1   - 4
    printf("\n r = %d", r);


	return 0;
}

