/* programme en C */
#include<stdlib.h>
#include<stdio.h>

char minuscule(char caractere) {
    if (caractere >= 65 && caractere <= 90) {
        return caractere + 32;  // Convertir en minuscule
    }
    else if (caractere >= 97 && caractere <= 122) {
        return caractere;  // Déjà en minuscule
    }
    else {
        return 0;  // Indiquer que ce n'est pas une lettre
    }
}

int main()
{
	char caractere;

    printf("Entrer un caractere: ");

    scanf("%c", &caractere);

    printf("Le caractere en minuscule est: %c\n", minuscule(caractere));

    return 0;
}