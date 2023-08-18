#include <stdio.h>

#define BUFFER 100
#define IN 1
#define OUT 0

int main()
{
    int c, state;
    state = OUT;

    int word_len_arr[BUFFER] = {0};
    int word_len = 0;
    int index = 0;
    int max_len = 0;

    // 统计输入的单词长度
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            state = OUT;
            if (word_len != 0)
            {
                max_len = word_len > max_len ? word_len : max_len;
                word_len_arr[index] = word_len;
                ++index;
            }
            word_len = 0;
        }
        else if (state == OUT)
        {
            state == IN;
            ++word_len;
        }
        else if (state == IN)
        {
            ++word_len;
        }
    }
    // 按ctrl+d结束输入，最后一个输入若为有效字符，则统计的字长未被记录到数组中，如果最后输入的是换行或空格，则不计入数组
    if (word_len != 0)
    {
        max_len = word_len > max_len ? word_len : max_len;
        word_len_arr[index] = word_len;
        ++index;
    }

    printf("\n");
    printf("---------------Horizontal Histogram---------------\n");
    for (int i = 0; i < index; ++i)
    {
        for (int j = 0; j < word_len_arr[i]; ++j)
        {
            printf("*");
        }
        printf("(%d)\n", word_len_arr[i]);
    }
    printf("\n");
    printf("---------------Vertical Histogram---------------\n");
    for (int i = max_len + 1; i > 0; --i)
    {
        if (i == max_len + 1)
        {
            for (int j = 0; j < index; ++j)
            {
                printf("(%d)\t", word_len_arr[j]);
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < index; ++j)
            {
                if (word_len_arr[j] == i)
                {
                    printf("**\t");
                    word_len_arr[j]--;
                }
                else
                {
                    printf("  \t");
                }
            }
            printf("\n");
        }
    }
}