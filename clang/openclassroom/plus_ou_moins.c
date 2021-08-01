#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ft_cestmoins(void)
{
    printf("C'est moins !\n");
}

void ft_cestplus(void)
{
    printf("C'est plus !\n");
}

int ft_difficulte(void)
{
    int niveau;
    printf ("Sélectionnez le niveau de difficulté :\n.1 = entre 1 et 100;\n.2 = entre 1 et 1000;\n.3 = entre 1 et 10000;\n");
    scanf ("%d", &niveau);
    return niveau;
}

int main()
{
    int continuer;
    continuer = 0;
    
    do 
    {
        int max, min;
        int difficulte;
        difficulte = ft_difficulte();
        if (difficulte == 1) {max = 100; min = 1;}
        else if (difficulte == 2) {max = 1000; min = 1;}
        else if (difficulte == 3) {max = 10000; min = 1;}
        int nombre_mystere;
        int nombre;
        int tentatives;
        nombre = 0;
        tentatives = 1;
        srand(time(NULL));
        nombre_mystere = (rand() % (max - min +1)) + min;


        while (nombre!=nombre_mystere)
        {
            printf("Quel est le nombre mystère ? ");
            scanf("%d", &nombre);
            if (nombre==nombre_mystere)
            {printf("Bravo, %d est bien le nombre mystère, vous l'avez trouvé en %d coups !\n", nombre_mystere, tentatives);}
            else if (nombre > nombre_mystere)
            {ft_cestmoins();}
            else {ft_cestplus();}
            tentatives++;
        }
        printf ("Souhaitez-vous rejouer (oui : 1 / non: 0) ?");
        scanf ("%d", &continuer);
    }
    while (continuer);
    
    return (0);
}
