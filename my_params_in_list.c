#include <stdlib.h>

#include "mylist.h"
#include "my.h"

t_list *my_params_in_list(int ac, char **av)
{
	t_list *params;
	t_list *node;
	int i;

	i = 1;
	params = NULL;
	while (i < ac)
	{
		if ((node = malloc(sizeof(*node))))
		{
			node->data = av[i];
			node->next = params;
			params = node;
		}
		i += 1;
	}
	return params;
}
