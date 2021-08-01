#include <stdio.h>

void ft_double(int *pointeur_sur_nombre);

int main()
{
    int nombre;
    printf ("Indiquez le nombre à doubler : ");
    scanf ("%d", &nombre);
    ft_double(&nombre);
    printf ("Le résultat est %d\n", nombre);
}

void ft_double(int *pointeur_sur_nombre)
{
    *pointeur_sur_nombre *=2;
}
