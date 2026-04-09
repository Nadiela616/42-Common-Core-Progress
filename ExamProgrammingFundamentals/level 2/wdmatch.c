#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int j;
    i = 0;
    j = 0;

    if (ac == 3)
    {
        while(av[2][j] && av[1][i])
        {
            if (av[1][i] == av[2][j])
              j++;
            i++;
        }
        if (av[2][j] == '\0')
        {
            j = 0;
            while (av[2][j])
            write(1, &av[2][j++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}