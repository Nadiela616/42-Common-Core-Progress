/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
_________________________________________________________________________________

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);


shpjegim:

që kopjon përmbajtjen e string-ut s2 te s1, duke sjellë të njëjtin rezultat si funksioni standard strcpy.

Si funksionon ideja
s2 është string-u burim (source).
s1 është string-u destinacion (destination).
Duhet të kopjosh karakter për karakter nga s2 te s1.
Mos harro të kopjosh edhe karakterin special '\0' që tregon fundin e string-ut.
Funksioni duhet të kthejë adresën e s1, si funksioni origjinal.
*/




#include <unistd.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s2[i])
    {
    s1[i] = s2[i];
    i++;
    }
    s1[i] ='\0';
   return(s1);
}

#include <stdio.h>
int main()
{
    char src[] = "Hello 42!";
    char dest[50];
    ft_strcpy(dest, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    return 0;
}
