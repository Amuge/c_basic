#include <stdio.h>

int main()
{
    int c, blank_cnt, tab_cnt, newline_cnt;
    blank_cnt = tab_cnt = newline_cnt = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blank_cnt;
        else if (c == '\t')
            ++tab_cnt;
        else if (c == '\n')
            ++newline_cnt;
    }

    printf("%3d blanks%3d tabs%3d newlines\n", blank_cnt, tab_cnt, newline_cnt);
}