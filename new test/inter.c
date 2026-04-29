#include <unistd.h>
int main (int ac, char **av)
{
    int i = 0;
    int j;
    int lookup[256] = {};
    
    if(ac == 3)
    {
        while(av[1][i])
        {
             j = 0;
            while(av[2][j])
            {
                 if(av[1][i] == av[2][j] && !lookup[(int)av[2][j]])
                 {
                    lookup[(int)av[2][j]] = 1;
                    write(1, &av[2][j], 1);
                 }
                 j++;
            }
             i++;
        }
    }
    write(1, "\n", 1);
}