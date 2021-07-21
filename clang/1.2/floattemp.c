#include <stdio.h>

/* main function */
int main()
{
    float fahr, celsius; 
    int step, lower, upper;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf ("Temperature conversion program (°F/°C)\n");
    /* while loop */
    while (fahr <= upper) {
    
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }

     return 0;  
}
