#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

/*
** REMOVE FUNCTION
*/

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *cur;
    t_list *tmp;

    if (!begin_list || !*begin_list)
        return;

    // remove head
    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        tmp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(tmp);
    }

    // remove rest
    cur = *begin_list;
    while (cur && cur->next)
    {
        if (cmp(cur->next->data, data_ref) == 0)
        {
            tmp = cur->next;
            cur->next = cur->next->next;
            free(tmp);
        }
        else
            cur = cur->next;
    }
}

/*
** TEST PART (MAIN)
*/

t_list *create_node(void *data)
{
    t_list *new = malloc(sizeof(t_list));
    if (!new)
        return NULL;
    new->data = data;
    new->next = NULL;
    return new;
}

int cmp(void *a, void *b)
{
    return (a != b);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->data);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *a = create_node("A");
    t_list *b = create_node("B");
    t_list *c = create_node("C");
    t_list *d = create_node("B");

    a->next = b;
    b->next = c;
    c->next = d;

    printf("Before:\n");
    print_list(a);

    ft_list_remove_if(&a, "B", cmp);

    printf("After:\n");
    print_list(a);

    while (a)
    {
        t_list *tmp = a;
        a = a->next;
        free(tmp);
    }

    return 0;
}