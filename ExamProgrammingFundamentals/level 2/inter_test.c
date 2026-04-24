#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int j;
    int k;

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            j = 0;

            // check if already printed in av[1]
            while (j < i)
            {
                if (av[1][j] == av[1][i])
                    break;
                j++;
            }

            // if not duplicate
            if (j == i)
            {
                // check if exists in av[2]
                k = 0;
                while (av[2][k])
                {
                    if (av[1][i] == av[2][k])
                    {
                        write(1, &av[1][i], 1);
                        break;
                    }
                    k++;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}