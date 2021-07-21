#include <stdio.h>

#define     LOWER   0
#define     UPPER   300
#define     STEP    20

int main() {
    int fahr;
    float celsius;
    fahr = LOWER;

    while (fahr <= UPPER) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf ("%3d\t%6.2f\n",fahr,celsius);
        fahr = fahr + STEP;
    }
    return 0;
   }
