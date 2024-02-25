#include <stdio.h>
#define MAXLINE 100

int get_line(char line[], int maxline);

int main() {
    int len;
    int max;
    char line[MAXLINE];

    // max = 0;
    // while ((len = getline(line, MAXLINE)) > 0) {
    //     if (len > max) {
    //         max = len;
    //     }
    // }

    int c;
    int i = 0;
    while((len = get_line(line, MAXLINE)) > 0) {
        line[i] = c;
        i++;
    }
    
    printf("%s", line);
    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;;
        i++;
    }
    s[i] = '\0';
    return i;
}