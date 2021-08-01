#include <stdio.h>
#include <stdlib.h>

/* fonction punition */
void ft_punition(int nombre)
{
    int compteur;
    compteur = 0;
    while (compteur < nombre)
    {
        printf ("J'irai juqu'au bout de la piscine !!!\n");
        compteur++;
    }
}

int main()
{
    int ligne;
    printf ("Indiquez le nombre de lignes à afficher : ");
    scanf ("%d", &ligne);
    ft_punition(ligne);
    return (0);
}
