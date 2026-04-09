#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = (end - start < 0) ? (start - end + 1) : (end - start + 1);
    int *range = (int *)malloc(len * sizeof(int));
    if (!range)
        return NULL;

    while (i < len)
    {
        if (start <= end)
            range[i++] = end--;
        else
            range[i++] = end++;
    }
    return range;
}

/*
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end);

void test_rrange(int start, int end)
{
    int *arr = ft_rrange(start, end);
    if (!arr)
        return;

    int len = (end - start < 0) ? (start - end + 1) : (end - start + 1);

    printf("Reverse range from %d to %d: ", start, end);
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
}

int main(void)
{
    test_rrange(1, 3);
    test_rrange(-1, 2);
    test_rrange(0, 0);
    test_rrange(0, -3);
    test_rrange(5, 10);
    test_rrange(10, 5);
    return 0;
}

*/