#include <stdio.h> 

/* declaration de variables */


/* fonction principale */

int main() 
{
    int nombre_de_vies, puissance;
    const signed int RANG = 150;
    float moyenne;

    /* assignation des valeurs */
    nombre_de_vies = 5;
    puissance = 0;
    moyenne = 1.36;
    printf("Vous avez %d vies \n", nombre_de_vies);
    nombre_de_vies = 4;
    printf("Vous avez %d vies restantes et vous êtes rang %d\n", nombre_de_vies, RANG);
    printf("Indiquez le niveau de puissance de votre personnage");
    scanf("%d\n",&puissance);
    printf("Votre personnage est de puissance %d et votre moyenne est %f\n", puissance, moyenne);
    return (0);
}

