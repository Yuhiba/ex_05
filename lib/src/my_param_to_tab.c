#include <stdlib.h>

#include "my.h"

struct s_stock_par *my_param_to_tab(int ac, char **av)
{
	struct s_stock_par *param;
	int i;

	i = 0;
	if ((param = malloc((ac + 1) * sizeof(*param))))
	{
		while (i < ac)
		{
			param[i].size_param = my_strlen(av[i]);
			param[i].str = my_strdup(av[i]);
			param[i].copy = my_strdup(av[i]);
			param[i].tab = my_str_to_wordtab(av[i]);
			i += 1;
		}
		param[i].str = NULL;
	}
	return param;
}