
#include <stdio.h>
char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while(str[j])
        j++;
    j--;
while( i < j)
{
    temp = str [i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
}
return(str);
}

int main(void)
{
    char s[] = "hello";

    printf("%s\n", ft_strrev(s));
    return (0);
}