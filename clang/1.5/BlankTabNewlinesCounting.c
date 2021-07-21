#include <stdio.h>

int main() {
    int nc, c;
    nc = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') ++nc;
        else if (c == '\t') ++nc;
        else if (c == ' ') ++nc;
        printf ("%d\n", nc);
    }
    return 0;
}
