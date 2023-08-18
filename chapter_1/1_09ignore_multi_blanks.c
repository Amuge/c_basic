#include <stdio.h>

int main()
{
    int cur, prev;
    prev = '\0';
    while ((cur = getchar()) != EOF)
    {
        if (cur != ' ' || prev != ' ')
            putchar(cur);
        prev = cur;
    }
}