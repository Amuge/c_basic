#include <stdio.h>
#define MAXLINE 10

int get_line(char s[], int lim);
int length(char line[]);
void reverse_string(char line[]);

int main()
{
    int len;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        reverse_string(line);
        printf("%s", line);
    }
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

int length(char line[])
{
    int i;
    for (i = 0; line[i] != '\0'; ++i)
        ;
    return i;
}

void reverse_string(char line[])
{
    int left = 0;
    int right;
    int len = length(line);

    if (line[len - 1] == '\n')
        right = len - 2;
    else
        right = len - 1;

    char temp;
    while (left < right)
    {
        temp = line[left];
        line[left] = line[right];
        line[right] = temp;
        ++left;
        --right;
    }
}