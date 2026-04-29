#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;
    t_list *current;

    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        tmp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(tmp);
    }

    current = *begin_list;

    while (current && current->next)
    {
        if (cmp(current->next->data, data_ref) == 0)
        {
            tmp = current->next;
            current->next = current->next->next;
            free(tmp);
        }
        else
            current = current->next;
    }
}







#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int cmp_int(void *a, void *b)
{
    return (*(int *)a - *(int *)b);
}

t_list *create_node(int value)
{
    t_list *node = malloc(sizeof(t_list));
    int *data = malloc(sizeof(int));

    *data = value;
    node->data = data;
    node->next = NULL;
    return node;
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", *(int *)lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main(void)
{
    t_list *list;
    t_list *tmp;
    int ref = 2;

    list = create_node(1);
    list->next = create_node(2);
    list->next->next = create_node(3);
    list->next->next->next = create_node(2);
    list->next->next->next->next = create_node(4);

    printf("Before: ");
    print_list(list);

    ft_list_remove_if(&list, &ref, cmp_int);

    printf("After:  ");
    print_list(list);

    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp->data);
        free(tmp);
    }

    return 0;
}









//mungon ft_list.h
#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
    struct s_list *next;
    void          *data;
} t_list;

#endif