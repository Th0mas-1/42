#include <stdio.h>

int main()
{
    int premier_terme, second_terme;
    int resultat;
    printf("Indiquez le premier terme : ");
    scanf("%d", &premier_terme);
    printf("Indiquez le second terme : ");
    scanf("%d", &second_terme);
    resultat = premier_terme + second_terme;
    printf("L'addition des deux termes est égal à %d\n", resultat);
}
