#include <stdio.h>

int main()
{
    // printf("hello,world\n\c");
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}