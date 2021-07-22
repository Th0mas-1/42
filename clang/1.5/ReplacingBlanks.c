#include <stdio.h>

int main(void) {
    int c, num_blank;
    num_blank = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (num_blank == 0) {
                num_blank = 1;
                putchar(c);
            }
        } if (c != ' ') {num_blank = 0; putchar(c);}
    }
    return 0;
}


