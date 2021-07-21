#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = -20;
    upper = 140;
    step = 10;
    celsius = lower;

    printf ("Temperature conversion program (°C/°F)\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf ("%6.1f\t%3.0f\n",celsius,fahr);
        celsius = celsius + step;
    }
    
    return 0;
}
