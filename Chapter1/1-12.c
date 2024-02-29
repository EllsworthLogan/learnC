#include <stdio.h>

/* This program prints its input one
word per line. */
int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            printf("\n");
            continue;
        }
        printf("%c", c);
    }
    printf("\n");
    return 0;
}