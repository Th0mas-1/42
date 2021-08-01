#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 37;
    int *mon_pointeur = &age;
    //*mon_pointeur = &age;

    printf("La variable age vaut : %d\n", age);
    printf("L'adresse de la variable age est : %p\n", &age);
    printf("L'adresse enregistrée comme valeur de mon pointeur est : %p\n", mon_pointeur);
    printf("L'adresse de mon pointeur est : %p\n", &mon_pointeur);

    }
    
