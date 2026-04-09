#include <unistd.h>
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;

    while(s2[i])
    {
    s1[i] = s2[i];
    i++;  
   }
   s1[i] = '\0';
   return (s1);
 
}
// int  main()
// {
//     char src[] = "Hello 42!";
//     char dest[50];

//     ft_strcpy(dest, src);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return 0;
// }

/*Çfarë bën ky main
src përmban string-un burim.
dest është destinacioni, mjaft i madh për të pranuar string-un.
Thërret ft_strcpy(dest, src) që të kopjojë të gjithë string-un.
Printon të dy string-et për të verifikuar kopjimin.*/