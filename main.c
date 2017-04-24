#include <stdio.h>

#include "my.h"
#include "mylist.h"

void show_list(t_list *params)
{
	if (params)
	{
		my_putstr(params->data);
		my_putstr("\n");
		show_list(params->next);
	}
}

int rev_str_list(void *s)
{
	my_revstr(s);
	return 0;
}


int main(int argc, char *argv[])
{
	t_list *params;

	params = my_params_in_list(argc, argv);
	printf("----------List equal or not equal------------------\n");
	show_list(params);
	printf("---------------------------------------------------\n");
	my_apply_on_eq_in_list(params, rev_str_list, "lapin", my_strcmp);
	show_list(params);
	printf("---------------------------------------------------\n");
	return 0;
}