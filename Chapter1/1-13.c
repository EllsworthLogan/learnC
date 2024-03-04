#include <stdio.h>
#define MAX 16

/* This program prints a histogram of the lengths of
words in its input.  */
int main() {
    int c, i;
    int hist[MAX];

    for (i = 0; i < MAX; i++) {
        hist[i] = 0;
    }

    i = 0;
    while (c = getchar()) {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\b' || c == '\\') {
            hist[i]++;
            i = 0;
            continue;
        }
        else if (c == EOF) {
            hist[i]++;
            break;
        }
        i++;
    }

    int j;
    printf("\nHistogram of (Reasonably Long) Word Lengths:");
    for (i = 1; i < MAX; i++) {
        printf("\n%2.d:", i);
        for (j = 0; j < hist[i]; j++) {
            printf(" -");
        }
    }
    printf("\n");

    return 0;
}