#include <unistd.h>
int main(int acc, char **av)
{
 int i;
 int lookup[256] = {0};

 if(acc == 3)
 {
    i = 0;
    while(av[1][i])
    
    {
        if(!lookup[(int)av[1][i]])
        {
            write(1, &av[1][i], 1);
            lookup[(int)av[1][i]] = 1;
        }
         i++;
    }

    i = 0;
    while(av[2][i])
    {
        if(!lookup[(int)av[2][i]])
        {
            write(1, &av[2][i], 1);
            lookup[(int)av[2][i]] = 1;
        }
         i++;
    }
 }
write(1, "\n", 1);
return 0;
}