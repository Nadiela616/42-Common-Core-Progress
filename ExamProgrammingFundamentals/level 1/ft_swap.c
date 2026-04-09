#include <stdio.h>

// Funksioni ft_swap
void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// Funksioni main për testim
int main()
{
    int x = 42;
    int y = 84;

    printf("Para swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Pas swap: x = %d, y = %d\n", x, y);

    return 0;
}