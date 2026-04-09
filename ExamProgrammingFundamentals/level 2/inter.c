// #include <unistd.h>
// int main(int ac, char **av)
// {
//     int i;
//     int j;
//     int k;
//     char c;
//     if (ac == 3)
//     {
//         i = 0;
//         while (av[1][i])
//         {
//             c = av[1][i];
//             j = 0;
//             while (j < i)
//             {
//                 if (av[1][j] == c)
//                 break;
//             j++;
//             }
//             if (j !=  i )
//             {

//             }
//         }
//     }
// }

#include <unistd.h>

int	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i = 0, j;
	int	lookup[256] = {};

	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !lookup[(int)av[2][j]])
				{
					lookup[(int)av[2][j]] = 1;
					ft_putchar(av[2][j]);
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
}

int	ft_putchar(char c)
{
	return write(1, &c, 1);
}

