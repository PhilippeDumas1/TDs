/* programme en C */
#include<stdlib.h>
#include<stdio.h>
#include <cmath>


int main()
{    
    float a, b, c;

    printf("Entrer les valeurs de (a, b, c): ");

    // Lire les saisies de l'utilisateur
    scanf("%f %f %f", &a, &b, &c);

    // Calculer le discriminant
    float discriminant = b * b - 4 * a * c;

    // Calculer les racines
    float racine1 = (-b + sqrt(discriminant)) / (2 * a);

    float racine2 = (-b - sqrt(discriminant)) / (2 * a);

    // Afficher les racines
    printf("Les racines sont: %.2f et %.2f", racine1, racine2);

    return 0;
}