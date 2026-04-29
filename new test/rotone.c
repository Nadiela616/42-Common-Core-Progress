/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

*/


#include <unistd.h>
int main( int ac, char **av)
{
    int i;
    i = 0;
    char c;
    if (ac == 2)
    {
        while(av[1][i])
        {
            c = av[1][i];
            if(c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
            c = c + 1;
        else if (c == 'z')
        c = 'a';
    else if (c == 'Z')
        c = 'A';
    write(1, &c, 1);
        i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}