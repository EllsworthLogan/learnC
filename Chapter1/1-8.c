#include <stdio.h>

/* This program counts blanks, tabs, and
newlines of input text. */
int main() {
    int blanks, tabs, newlines;
    int c;
    
    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        }        
        if (c == '\t') {
            tabs++;
        }
        if (c == '\n') {
            newlines++;
        }
    }
    printf("\nBlanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
    return 0;
}