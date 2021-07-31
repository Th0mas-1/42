#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 37;
    int *mon_pointeur;
    *mon_pointeur = &age;

    printf("La variable age vaut : %d\n", age);
    printf("L'adresse de la variable age est : %p\n", &age);

    }
    
