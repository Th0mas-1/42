#include <stdio.h>

void ft_generic(void)
{
    printf("Vous avez choisi le menu ");
}

int main()
{
    int choix_menu;
    
    printf("=== Menu ===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\nVotre choix ?\n");
    scanf("%d", &choix_menu);

    switch (choix_menu)
    {
        case 1:
            ft_generic();
            printf("Royal Cheese\n");
            break;
        case 2:
            ft_generic();
            printf("Mc Deluxe\n");
            break;
        case 3:
            ft_generic();
            printf("Mc Bacon\n");
            break;
        case 4:
            ft_generic();
            printf("Big Mac\n");
            break;
        default:
            printf("Choix non valide");
            break;
    }
}
