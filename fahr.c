#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = upper;
    printf("Temperature Conversion\n");
    printf("  C    F\n");
    while (celsius >= lower) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }
}