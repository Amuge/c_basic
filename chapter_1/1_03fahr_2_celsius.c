#include <stdio.h>
// #include<stdint.h>
// int32_t example = 128;

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
        celsuis = (5.0f / 9.0f) * (fahr - 32.0f);
        printf("%3.0f\t%6.1f\n", fahr, celsuis);
        fahr += step;
    }
}