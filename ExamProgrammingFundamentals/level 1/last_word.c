#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int start;
    if(ac == 2)
    {
        i = 0;
        while (av[1][i])
         i++;
    i--;
    while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
     i--;
    start = i;
    while (i >= 0 && (av[1][i] != ' ' || av[1][i] != '\t'))
    i--;
    while (++i <= start)
    write(1, &av[1][i], 1);
}
write(1, "\n", 1);
return(0);
}



/*gcc last_word.c -o last_word

./last_word "FOR PONY"*/