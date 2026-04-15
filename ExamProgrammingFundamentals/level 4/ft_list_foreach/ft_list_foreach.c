#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}







#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *create_node(void *data)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return NULL;
    new->data = data;
    new->next = NULL;
    return new;
}

void print_str(void *data)
{
    printf("%s\n", (char *)data);
}

int main(void)
{
    t_list *a;
    t_list *b;
    t_list *c;

    a = create_node("Hello");
    b = create_node("World");
    c = create_node("42");

    a->next = b;
    b->next = c;

    ft_list_foreach(a, print_str);

    free(a);
    free(b);
    free(c);

    return 0;
}
















/*


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
    */