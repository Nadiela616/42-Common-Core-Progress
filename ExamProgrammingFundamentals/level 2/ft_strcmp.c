#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;

    return (s1[i] - s2[i]);
}



int ft_strcmp(char *s1, char *s2);

int main(void)
{
    printf("%d\n", ft_strcmp("abc", "abc"));   // 0
    printf("%d\n", ft_strcmp("abc", "abd"));   // negative
    printf("%d\n", ft_strcmp("abd", "abc"));   // positive
    printf("%d\n", ft_strcmp("ebc", "addc"));  // positive
    return (0);
}