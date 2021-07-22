#include <stdio.h>

/* variables declaration */
int c;
int d = 0;
int i = 0;


/* char input/output loop */
int main()
{
    while ((c = getchar()) != EOF)
{
    putchar(c);
    if (c != ' ' && c != '\t' && c != '\n') {++d;}
    else if (c == '\n') {while (i <= d)
    {
        if (c == ' ' || c == '\t') {printf (" ");}
        else {printf ("-");}
        ++i;
    }
    }
}
return 0;
}





