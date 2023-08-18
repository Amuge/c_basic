#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = -50;
    upper = 100;
    step = 10;

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0f / 5.0f) * celsius + 32.0f;
        printf("%3.0f%6.1f\n", celsius, fahr);
        celsius += step;
    }
}