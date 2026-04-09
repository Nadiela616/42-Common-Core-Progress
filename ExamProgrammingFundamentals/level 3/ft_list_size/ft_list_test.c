#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

// Deklarimi i funksionit që ke bërë
int ft_list_size(t_list *begin_list);

int main()
{
    // Krijojmë disa elemente
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    int a = 10, b = 20, c = 30;

    // Vendosim të dhënat dhe lidhjet
    head->data = &a;
    head->next = second;

    second->data = &b;
    second->next = third;

    third->data = &c;
    third->next = NULL;

    // Testojmë ft_list_size
    printf("Size of the list: %d\n", ft_list_size(head));

    // Pastrimi i memories
    free(third);
    free(second);
    free(head);

    return 0;
}