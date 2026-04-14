#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len = (end - start < 0) ? (start - end + 1) : (end - start + 1);
    int *range = (int *)malloc(len * sizeof(int));
    if (!range)
        return NULL;

    while (i < len)
    {
        if (start <= end)
            range[i++] = start++;
        else
            range[i++] = start--;
    }
    return range;
}

/*
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end);

void test_range(int start, int end)
{
    int *arr = ft_range(start, end);
    if (!arr)
        return;

    int len = (end - start < 0) ? (start - end + 1) : (end - start + 1);

    printf("Range from %d to %d: ", start, end);
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
}

int main(void)
{
    test_range(1, 3);
    test_range(-1, 2);
    test_range(0, 0);
    test_range(0, -3);
    test_range(5, 10);
    test_range(10, 5);
    return 0;
}

*/


/*
testim:
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end);

int main(void)
{
    int start = 0;
    int end = -3;
    int i;
    int len;

    if (start > end)
        len = start - end + 1;
    else
        len = end - start + 1;

    int *arr = ft_range(start, end);

    if (!arr)
    {
        printf("malloc failed\n");
        return 1;
    }

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