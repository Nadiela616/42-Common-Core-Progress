#include <stdlib.h>

static int len_nbr(long n)
{
    int len = 0;

    if (n <= 0)
        len++;
    while (n)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int nbr)
{
    long n = nbr;
    int len = len_nbr(n);
    char *str = malloc(len + 1);
    if (!str)
        return NULL;

    str[len] = '\0';

    if (n == 0)
        str[0] = '0';

    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }

    while (n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }

    return str;
}


#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr);

int main(void)
{
    char *str;

    str = ft_itoa(0);
    printf("0 -> %s\n", str);
    free(str);

    str = ft_itoa(42);
    printf("42 -> %s\n", str);
    free(str);

    str = ft_itoa(-42);
    printf("-42 -> %s\n", str);
    free(str);

    str = ft_itoa(123456);
    printf("123456 -> %s\n", str);
    free(str);

    str = ft_itoa(-2147483648);
    printf("INT_MIN -> %s\n", str);
    free(str);

    return 0;
}
