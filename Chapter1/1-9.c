#include <stdio.h>

/* This program copies its input to its output,
replacing each string of one or more blanks by
a single blank. */
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            printf("%c", c);
            while (c == ' ') {
                c = getchar();
            }
        }
        printf("%c", c);
    }
    printf("\n");
    return 0;
}