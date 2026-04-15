#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len;
    int *arr;
    int i = 0;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    arr = (int *)malloc(sizeof(int) * len);
    if (!arr)
        return NULL;

    while (i < len)
    {
        arr[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }

    return arr;
}


#include <stdio.h>

int main()
{
    int i;
    int *arr = ft_range(0, -3);

    for (i = 0; i < 4; i++)
        printf("%d ", arr[i]);

    return 0;
}