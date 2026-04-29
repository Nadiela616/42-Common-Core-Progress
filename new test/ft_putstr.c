/*Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
_________________________________________________________________________________

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void ft_putstr(char *str);

funksion që shfaq një string në standard output (ekran) duke përdorur vetëm funksionin write.

*/

#include <unistd.h>
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
    
write(1, &str[i], 1)
    i++; 
}
}

int main(void s)
{
printf("%d\n", ft_putstr("hello"));
}