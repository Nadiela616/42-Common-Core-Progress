#include <unistd.h>
int main (int acc, char **av)
{
    int i;
    i = 0;
    char c;
    if (acc == 2)
    {
        while(av[1][i])
        {
            c = av[1][i];
            if (c >= 'a' && c <= 'z') 
            c = c - 32;
        else if (c >= 'A' && c <= 'Z')
            c = c + 32;
        write(1, &c, 1);
        i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}