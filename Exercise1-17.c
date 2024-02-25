#include <stdio.h>
#define REASONABLE_LENGTH 100
#define MAX 20
#define MIN 10

int getNextLine(char s[]);
char curLine[REASONABLE_LENGTH];

/* Prints all input lines greater with length between
MIN and MAX. */
int main() {
    int c;

    while ((c = getNextLine(curLine)) > 0) {
        if (c > MIN && c < MAX) {
            printf("Printing line with valid length:\n%s\n", curLine);
        }
    }
}

int getNextLine(char s[]) {
    int c, i;

    for (i = 0; i < REASONABLE_LENGTH - 1 && (c = getchar()) != EOF && c !='\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}