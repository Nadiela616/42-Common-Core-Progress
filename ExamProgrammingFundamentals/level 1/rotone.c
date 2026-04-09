#include <unistd.h>
int main(int ac, char **av)
{
 int i;
 char c;
 i = 0;
 if(ac == 2)
 {
    while(av[1][i])
    {
    c = av[1][i];
    if(c >= 'A' && c <= 'Y')
       c = c + 1;
    else if(c >= 'a' && c <= 'y')
       c = c + 1;
    else if( c == 'z')
     c = 'a';
    else if (c == 'Z')
     c = 'A';
write(1, &c, 1);
   i++;
 }   
}
write(1, "\n", 1);
return (0);
}
                           
