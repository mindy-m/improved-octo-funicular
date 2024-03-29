/* Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

/* print Celsius-Farenheit table
    for celsius = 0, 20, ..., 300; floating point version */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    printf("%s\t%s\n", "Celsius", "Fahrenheit");

    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%5.0f \t%7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}