#include <stdio.h>

/* main function */
int main() {
    for (int fahr = 300; fahr >= 0; fahr = fahr - 20) {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("%3d\t%6.1f\n",fahr,celsius);
    }

    return 0;
}
