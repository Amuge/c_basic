#include <stdio.h>

float fahr_to_celsuis(float fahr);

int main()
{
    float fahr, celsuis;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr and Celsuis\n");
    while (fahr <= upper)
    {
        celsuis = fahr_to_celsuis(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsuis);
        fahr += step;
    }
}

float fahr_to_celsuis(float fahr)
{
    return (5.0f / 9.0f) * (fahr - 32.0f);
}