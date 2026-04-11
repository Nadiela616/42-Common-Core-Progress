#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int count = 0;

	while (begin_list != 0)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

t_list *new_node(void *data)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int main(void)
{
	t_list *a; 
	t_list *b;
	t_list *c;

	// Krijojmë 3 elementë
	a = new_node("Hello");
	b = new_node("World");
	c = new_node("!");

	// I lidhim
	a->next = b;
	b->next = c;
	c->next = NULL;

	// Thërrasim funksionin
	int size = ft_list_size(a);

	printf("Size of list: %d\n", size);

	return (0);
}
 

