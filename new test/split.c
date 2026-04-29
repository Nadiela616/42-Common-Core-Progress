#include <stdlib.h>

static int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

static int count_words(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if (str[i])
            count++;
        while (str[i] && !is_space(str[i]))
            i++;
    }
    return count;
}

static char *word_dup(char *str, int start, int end)
{
    char *word;
    int i = 0;

    word = malloc(end - start + 1);
    if (!word)
        return NULL;

    while (start < end)
        word[i++] = str[start++];
    word[i] = '\0';

    return word;
}

char **ft_split(char *str)
{
    int i = 0, j = 0, start;
    int wc = count_words(str);
    char **result = malloc((wc + 1) * sizeof(char *));
    if (!result)
        return NULL;

    while (str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if (!str[i])
            break;
        start = i;
        while (str[i] && !is_space(str[i]))
            i++;
        result[j++] = word_dup(str, start, i);
    }
    result[j] = NULL;
    return result;
}







#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str);

int main(void)
{
    char **arr;
    int i = 0;

    arr = ft_split("hello   world\n42  school\ttest");
    if (!arr)
        return 1;

    while (arr[i])
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
        i++;
    }
    free(arr);

    return 0;
}