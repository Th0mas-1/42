#include <stdio.h>

void ft_decoupe_minutes(int nombre_de_minutes, int *heures, int *minutes);

int main()
{
    int nombre_de_minutes, heures, minutes;
    heures = 0;
    minutes = 0;
    printf ("Indiquez le nombre de minutes à découper en heures, minutes : ");
    scanf ("%d", &nombre_de_minutes);
    ft_decoupe_minutes(nombre_de_minutes, &heures, &minutes);
    printf ("%d minutes correspond à %d heures et %d minutes\n", nombre_de_minutes, heures, minutes);
    return (0);
}

void ft_decoupe_minutes(int nombre_de_minutes, int *heures, int *minutes)
{
    *heures = nombre_de_minutes / 60;
    *minutes = nombre_de_minutes % 60;
}
