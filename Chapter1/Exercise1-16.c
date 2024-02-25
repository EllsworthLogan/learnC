#include <stdio.h>
/* MAXLINE has been set to 10 rather than 1000
here for easier use and testing. */
#define MAXLINE 10

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* Revise the main rounine of the longest-line program
so it will correctly print the length of arbitrarily long
input lines, and as much as possible of the text. */
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        if (max >= MAXLINE) {
            printf("Longest line length: %d\n", max);
            printf("Output length exceeded: %s...\n", longest);
        } else {
            printf("Longest line length: %d\n", max);
            printf("%s\n", longest);
        }
    }
    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        // Stop putting c into the array, as we are out of bounds.
        if (i < MAXLINE) {
            s[i] = c;
        }
    }
    s[MAXLINE - 1] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0' && i < MAXLINE) {
       ++i; 
    }
}