#include "stdlib.h"

int	ft_count_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int i;
	int len;
	long num;
	char *str;

	num = nbr;
	len = ft_count_len(nbr);
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	str[i] = num + '0';
	return (str);
}



#include <stdio.h>

int main(void)
{
    int tests[] = {0, 42, -42, 2147483647, -2147483648};
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++)
    {
        char *str = ft_itoa(tests[i]);
        if (str)
        {
            printf("ft_itoa(%d) = %s\n", tests[i], str);
            free(str); // Lirojmë memorien e alokuar
        }
        else
            printf("ft_itoa(%d) failed to allocate memory\n", tests[i]);
    }
    return 0;
}