#include <stdio.h>

/* This program prints a histogram of the frequencies
of different characters in its input. */

main() {

    int c, digit, whitespace, other;
    int ar[3];
    ar[0] = 0;
    ar[1] = 0;
    ar[2] = 0;

    digit = 0;
    whitespace = 1;
    other = 2;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ar[digit];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++ar[whitespace];
        }
        else {
            ++ar[other];
        }
    }

    printf("Histogram of input type frequency:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < ar[i]; ++j) {
            if (j == 0 && i == 0) {
                printf("%10s ", "digit");
            }
            else if (j == 0 && i == 1) {
                printf("%s ", "whitespace");
            }
            else if (j == 0 && i == 2) {
                printf("%10s ", "other");
            }
            printf("%c", '-');
        }
        printf("\n");
    }

}