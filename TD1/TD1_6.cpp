/* programme en C */
#include<stdlib.h>
#include<stdio.h>


int main() {
	
	int x = 14, y = 13;
	if (x > y) {
		if (x < 20) {
			x -= 10;
		}
		else{
			x += 10;
		}
	}
	printf("%d\n", x);
	return 0;

	//ce programme imprime 4
	//---------------//

	int x2 = 4, y2 = 3;

	x2 = x2 + y2;
	y2 = x2 - y2;
	printf("%d\n", y2);
	return 0;
	
	//ce programme imprime aussi 4 
	//---------------//

	int x3 = 0, y3 = 100;
	int cmp = 0;

	while (x3 * x3 <= y3) {
		x3 += 1;
		cmp++;
	}

	printf("l'intruction s'est faites : %d\n", cmp);
	return 0;
	
	//ce programme imprime 11 
	//---------------//
}

