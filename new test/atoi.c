#include <unistd.h>
int ft_atoi(const char *str)
{
    int i;
   int sign = 1;
    int res = 0;
    i = 0;
    while (str[i] == ' '|| (str[i] >= '\t' && str[i] <= '\r'))
    i++;
if(str[i] == '-' || str[i] == '+')
{
    if (str[i] == '-')
    sign = -1;
    i++;
}
while (str[i] >= '0'  && str[i] <= '9')
{
    res = res * 10 + (str[i] - '0');
    i++;
}
return (sign * res);
}
void ft_putnbr(int n)
{
    char c;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
    ft_putnbr(n/10);
c = (n % 10) + '0';
write(1, &c, 1);
}

int main(int ac, char **av)
{
    if(ac  == 2)
     ft_putnbr(ft_atoi(av[1]));
    write(1,"\n", 1);
    return 0;
}