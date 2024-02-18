 #include <stdio.h>

/* This program prints its input one word per line */

main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            printf("\n");
        } else {
            printf("%c", c);
        }
    }

}