/* programme en C */
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int bclF(int n) {
	int resultat = 1;
	int i;

	for ( i = 1; i <= n; i++)
	{
		resultat *= i;
	}
	printf("Avec la boucle for on obtient : %d\n",resultat);
	return resultat;
}

int bclW(int n) {
	int resultat = 1;
	int i = 1;

	while (i <= n) {
		resultat *= i;
		i++;
	}
	printf("Avec la boucle while on obtient : %d\n", resultat);
	return resultat;
}

int bclR(int n) {
	int resultat;

	if (n == 0 || n == 1) {
		return 1;
	}
	else{
		return n * bclR(n - 1);
	}
}

int main()
{
	int n;

	printf("Entrer une valeur: ");
	scanf("%d", &n);
	bclF(n);
	bclW(n);
	printf("Avec la boucle recursive on obtient : %d\n", bclR(n));
}
