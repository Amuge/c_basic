#include <stdio.h>

#define ALPHA_CNT 26
#define NUM_CNT 10

int main()
{
    int c;
    int char_cnt[ALPHA_CNT + NUM_CNT] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            ++char_cnt[c - 'a'];
        }
        else if (c >= '0' && c <= '9')
        {
            ++char_cnt[c - '0' + ALPHA_CNT];
        }
    }

    for (int i = 0; i < (ALPHA_CNT + NUM_CNT); ++i)
    {
        if (i < ALPHA_CNT)
        {
            printf("%c: ", 'a' + i);
        }
        else if (i >= ALPHA_CNT)
        {
            printf("%c: ", '0' + i - ALPHA_CNT);
        }

        for (int j = 0; j < char_cnt[i]; ++j)
            printf("#");
        printf("(%d)", char_cnt[i]);
        putchar('\n');
    }
}