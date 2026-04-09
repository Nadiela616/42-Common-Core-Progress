#include <stdio.h>

char *ft_strrev(char *str){
    int i;
    int j;
    char temp;

    i = 0;
    while (str[i])
      i++;
    j = i - 1;
    i = 0;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return (str);
}


int main()
{
    char s[] = "hello";

    printf("%s\n", ft_strrev(s));
}