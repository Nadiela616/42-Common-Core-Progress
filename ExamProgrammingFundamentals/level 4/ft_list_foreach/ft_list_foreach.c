#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list*		elem = begin_list;
	
	while (elem)
	{
		f(elem->data);
		elem = elem->next;
	}
}





#include <stdio.h>
#include <stdlib.h>


// Funksion që printon një int
void print_int(void *data)
{
    printf("%d\n", *(int*)data);
}

// Krijon një element të listës
t_list *create_elem(int value)
{
    t_list *node = malloc(sizeof(t_list));
    int *num = malloc(sizeof(int));
    *num = value;
    node->data = num;
    node->next = NULL;
    return node;
}

int main(void)
{
    t_list *head = create_elem(1);
    head->next = create_elem(2);
    head->next->next = create_elem(3);

    printf("Print lista:\n");
    ft_list_foreach(head, &print_int);

    // Lirimi i memories
    t_list *tmp;
    while (head)
    {
        tmp = head->next;
        free(head->data);
        free(head);
        head = tmp;
    }
    return 0;
}