#include <stdlib.h>
#include <stdio.h>

// Kontrollon nëse karakteri është ndarës (space, tab, newline)
static int is_sep(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

// Numëron sa fjalë ka string-u
static int word_count(char *s)
{
    int i = 0;
    int count = 0;

    while (s[i])
    {
        while (s[i] && is_sep(s[i]))
            i++;
        if (s[i])
            count++;
        while (s[i] && !is_sep(s[i]))
            i++;
    }
    return count;
}

// Krijon një kopje të fjalës nga start deri end
static char *word_dup(char *s, int start, int end)
{
    char *word = malloc(end - start + 1);
    int i = 0;

    if (!word)
        return NULL;
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return word;
}

// Funksioni kryesor ft_split
char **ft_split(char *str)
{
    int i = 0, j = 0, start;
    char **res = malloc(sizeof(char *) * (word_count(str) + 1));
    if (!res)
        return NULL;

    while (str[i])
    {
        while (str[i] && is_sep(str[i]))
            i++;
        start = i;
        while (str[i] && !is_sep(str[i]))
            i++;
        if (i > start)
            res[j++] = word_dup(str, start, i);
    }
    res[j] = NULL;
    return res;
}

// Main për testim
int main(void)
{
    char *test = "abc def\nghi\tjkl";
    char **res = ft_split(test);

    for (int i = 0; res[i]; i++)
    {
        printf("[%s]\n", res[i]);
        free(res[i]); // lirojmë memorien e çdo fjalë
    }
    free(res); // lirojmë array-in
    return 0;
}