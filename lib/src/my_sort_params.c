#include "my.h"

void my_swap_ptr(char *v[], int a, int b)
{
	char *tmp;

	tmp = v[a];
	v[a] = v[b];
	v[b] = tmp;
}

char **sort_params(int argc, char **argv)
{
	int i;

	int sorted = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < (argc - 1))
		{
			if (my_strcmp(argv[i], argv[i + 1]) > 0)
			{
				my_swap_ptr(argv, i, i + 1);
				sorted = 0;
			}
			i += 1;
		}
	}
	return argv;
}

void aff_params(char **argv)
{
	while (*argv)
	{
		my_putstr(*argv++);
		my_putstr("\n");
	}
}

int main(int argc, char *argv[])
{
	aff_params(sort_params(argc, argv));
	return 0;
}
