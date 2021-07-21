#include <stdio.h>

/* main function */
int main()
{
    int fahr, celsius, step, lower, upper;
    
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    /* while loop */
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf ("%d\t%d\n",fahr,celsius);
        fahr = fahr + step;
    }

     return 0;  
}
