#include <stdio.h>

#define MAXlINE 1000

int get_line(char line[], int limit);

int main()
{
    char line[MAXlINE];
    while (get_line(line, MAXlINE) > 0)
        printf("%s", line);
    return 0;
}

int get_line(char line[], int limit)
{
    int c, i;
    char loop = 1;

    for (i = 0; loop; ++i)
    {
        if (i > limit - 1)
            loop = 0;
        else if ((c = getchar()) == '\n')
            loop = 0;
        else if (c == EOF)
            loop = 0;
        else
            line[i] = c;
    }
    --i;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}