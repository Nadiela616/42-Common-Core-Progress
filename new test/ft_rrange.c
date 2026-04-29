#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = (start > end) ? (start - end + 1) : (end - start + 1);
    int *arr = malloc(len * sizeof(int));
    if (!arr)
        return NULL;

    while (i < len)
    {
        if (end > start)
            arr[i++] = end--;
        else
            arr[i++] = end++;
    }
    return arr;
}

/*
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end);

int main(void)
{
    int *arr;
    int i;
    int len = 4; // ndrysho sipas testit

    arr = ft_rrange(0, -3);
    if (!arr)
        return 1;

    i = 0;
    while (i < len)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);
    return 0;
}
    */