#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size;
    int i = 0;
    int *arr;

    size = (start <= end) ? (end - start + 1) : (start - end + 1);
    arr = malloc(size * sizeof(int));
    if (!arr)
        return NULL;

    while (i < size)
    {
        arr[i++] = start;
        start += (start < end) ? 1 : -1;
    }
    return arr;
}

/*
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end);

int main(void)
{
    int start = 0;
    int end = -3;
    int *arr;
    int size;
    int i;

    arr = ft_range(start, end);
    if (!arr)
        return 1;

    size = (start <= end) ? (end - start + 1) : (start - end + 1);

    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);
    return 0;
}
    */
    