#include <stdio.h>

/* main function */
int main(){
    for (float fahr = 0; fahr <= 300; fahr = fahr + 20) {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("%3.0f\t%6.1f\n",fahr,celsius);
    }

    return 0;
}
