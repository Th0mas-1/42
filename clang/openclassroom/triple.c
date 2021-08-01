#include <stdio.h>
#include <stdlib.h>

/* fonction triple */
int ft_triple(int nombre)
{
    int resultat;
    resultat = nombre * 3;
    return resultat;
}

/* fonction main */
int main()
{
    int nombre_demande, nombre_triple;
    printf ("Veuillez indiquer un nombre à tripler : ");
    scanf ("%d", &nombre_demande);
    nombre_triple = ft_triple(nombre_demande);
    printf ("Le triple de %d est %d\n", nombre_demande, nombre_triple);
    return (0);
}
