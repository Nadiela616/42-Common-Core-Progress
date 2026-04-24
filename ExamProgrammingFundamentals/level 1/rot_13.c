/* #include <unistd.h>
int main(int acc, char **av)
{
    int  i;
    char c;
    i = 0;
    if (acc == 2)
    {
        while(av[1][i])
        {
            c = av[1][i];
            if(c >= 'a' && c >= 'z')
            {
                if(c >= 'a' && c >= 'm')
                   c = c + 13;
                else 
                   c = c - 13;
            }
            else if(c >= 'A' && c >= 'Z')
            {
                if(c >= 'A' && c >= 'M')
                   c = c + 13;
                else 
                   c = c - 13;
            }
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
*/

#include <unistd.h>
int main(int acc, char **av)
{
    int  i;
    char c;
    i = 0;
    if (acc == 2)
    {
        while(av[1][i])
        {
            c = av[1][i];
            if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
    c = c + 13;
else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
    c = c - 13;
        
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
