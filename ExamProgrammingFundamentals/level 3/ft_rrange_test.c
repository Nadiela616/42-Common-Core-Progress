#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
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
        arr[i] = end;
        if (end > start)
            end--;
        else
            end++;
        i++;
    }

    return arr;
}



int main(void)
{
    int i;
    int *arr;

    // Test 1
    arr = ft_rrange(1, 3);
    for (i = 0; i < 3; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}