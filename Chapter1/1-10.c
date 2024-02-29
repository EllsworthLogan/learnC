#include <stdio.h>

/* This program copies its input to its output,
replacing each tab by \t, each backspace to \b,
and each backslash by \\. */
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
        else if (c == '\b') {
            printf("\\b");
        }
        else if (c == '\\') {
            printf("\\\\");
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}